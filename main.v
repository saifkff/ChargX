// Code your design here
module adder_for_auipc (
    input [31:0] pc_for_auipc,    
    input [31:0] imm_for_btype,   
    output [31:0] pc_plus_imm_for_auipc 
);

    assign pc_plus_imm_for_auipc = pc_for_auipc + imm_for_btype; 

endmodule
module ID_EX (
    input wire clk,rst,
    input wire [3:0] alu_sel_in,
    input wire wenb_in,rs2_imm_sel_in,load_enb_in,jal_enb_in,branch_enb_in,lui_enb_in,auipc_wenb_in,sb_in,sh_in,sw_in,store_enb_in,
    input wire [31:0] rs1_data_in,rs2_data_in,imm_in,pcplus4_in,
    input wire [4:0] rd_in,rs1_in,rs2_in,
    output reg [3:0] alu_sel_out,
    output reg wenb_out,rs2_imm_sel_out,load_enb_out,jal_enb_out,branch_enb_out,lui_enb_out,auipc_wenb_out,sb_out,sh_out,sw_out,store_enb_out,
    output reg [31:0] rs1_data_out,rs2_data_out,imm_out,pcplus4_out,
    output reg [4:0] rd_out,rs1_out,rs2_out,
    input wire stall,flush
);
    always @(posedge clk or posedge rst) begin
        if (rst || flush) begin
            alu_sel_out <= 4'b0;
            wenb_out <= 1'b0; rs2_imm_sel_out <= 1'b0; load_enb_out <= 1'b0; jal_enb_out <= 1'b0; branch_enb_out <= 1'b0; lui_enb_out <= 1'b0;
            auipc_wenb_out <= 1'b0; sb_out <= 1'b0; sw_out <= 1'b0; sh_out <= 1'b0;
            rs1_data_out <= 31'b0; rs2_data_out <= 31'b0; imm_out <= 31'b0; pcplus4_out <= 31'b0;
            rd_out <= 5'b0; rs1_out<=0;rs2_out<=0;store_enb_out<=0;
        end
        else if (!stall) begin
            alu_sel_out <= alu_sel_in;
            wenb_out <= wenb_in; rs2_imm_sel_out <= rs2_imm_sel_in; load_enb_out <= load_enb_in; jal_enb_out <= jal_enb_in; branch_enb_out <= branch_enb_in;
            lui_enb_out <= lui_enb_in;
            auipc_wenb_out <= auipc_wenb_in; sb_out <= sb_in; sw_out <= sw_in; sh_out <= sh_in;
            rs1_data_out <= rs1_data_in; rs2_data_out <= rs2_data_in; imm_out <= imm_in; pcplus4_out <= pcplus4_in;
            rd_out <= rd_in;rs1_out<=rs1_in;rs2_out<=rs2_in;store_enb_out<=store_enb_in;
        end
    end
    
endmodule
module alu(
  input [31:0] dataA, dataB,
    input [3:0] sel,
    output reg [31:0] out,
    output reg branch_taken // New output to indicate branch decision
);
    always @(*) begin
        branch_taken = 1'b0; // Default: Branch not taken

        case(sel)
            4'b0000: out = dataA + dataB; // ADD
            4'b0001: out = dataA << dataB[4:0]; // SLL
            4'b0010: out = (dataA < dataB) ? 32'b1 : 32'b0; // SLT
            4'b0011: out = ($unsigned(dataA) < $unsigned(dataB)) ? 32'b1 : 32'b0; // SLTU
            4'b0100: out = dataA ^ dataB; // XOR
            4'b0101: out = dataA >> dataB[4:0]; // SRL
            4'b0110: out = dataA | dataB; // OR
            4'b0111: out = dataA & dataB; // AND
            4'b1000: out = dataA - dataB; // SUB
            4'b1001: out = $signed(dataA) >>> dataB[4:0]; // SRA

            // Branch operations
            4'b1010: begin // BEQ (Branch if Equal)
                out = (dataA == dataB) ? 32'b1 : 32'b0;
                branch_taken = (dataA == dataB) ? 1'b1 : 1'b0;
            end
            4'b1011: begin // BNE (Branch if Not Equal)
                out = (dataA != dataB) ? 32'b1 : 32'b0;
                branch_taken = (dataA != dataB) ? 1'b1 : 1'b0;
            end
            4'b1100: begin // BLT (Branch if Less Than, signed)
                out = ($signed(dataA) < $signed(dataB)) ? 32'b1 : 32'b0;
                branch_taken = ($signed(dataA) < $signed(dataB)) ? 1'b1 : 1'b0;
            end
            4'b1101: begin // BGE (Branch if Greater or Equal, signed)
                out = ($signed(dataA) >= $signed(dataB)) ? 32'b1 : 32'b0;
                branch_taken = ($signed(dataA) >= $signed(dataB)) ? 1'b1 : 1'b0;
            end
            4'b1110: begin // BLTU (Branch if Less Than, unsigned)
                out = (dataA < dataB) ? 32'b1 : 32'b0;
                branch_taken = (dataA < dataB) ? 1'b1 : 1'b0;
            end
            4'b1111: begin // BGEU (Branch if Greater or Equal, unsigned)
                out = (dataA >= dataB) ? 32'b1 : 32'b0;
                branch_taken = (dataA >= dataB) ? 1'b1 : 1'b0;
            end

            default: out = 32'b0;
        endcase
    end
endmodule
module control_unit (
  input [31:0] instruction,
  input wire branch_taken,
    output reg [3:0] sel,
    output reg [1:0] sel_bit_mux,
    output addr, sub, sllr, sltr, sltur, xorr, srlr, srar, orr, andr,
    output addi,addi2, slli, slti, sltui, xori, srli, srai, ori, andi,
    output sw, sh, sb, lb, lh, lw, lbu, lhu,
    output jal, jalr,jalreverse,
    output beq, bne, blt, bge, bltu, bgeu,
    output add, sll, slt, sltu, xorrr, srl, sra, orrr, andd,
    output out0, out1, out2, out3,
    output wenb, rs2_imm_sel,
    output lui_enb, auipc_wenb, load_enb, jal_enb, branch_enb, in_to_pr,store_enb
);
    wire i0, i1, i2, i3, i4, i5, i6, i7, i8;
    wire [8:0] selected_bits;
    assign i0 = instruction[2];
    assign i1 = instruction[3];
    assign i2 = instruction[4];
    assign i3 = instruction[5];
    assign i4 = instruction[6];
    assign i5 = instruction[12];
    assign i6 = instruction[13];
    assign i7 = instruction[14];
    assign i8 = instruction[30];
    // R_type 
    assign addr = (~i0)&(~i1)&(i2)&(i3)&(~i4)&(~i5)&(~i6)&(~i7)&(~i8);
    assign sub = (~i0)&(~i1)&(i2)&(i3)&(~i4)&(~i5)&(~i6)&(~i7)&(i8);
    assign sllr = (~i0)&(~i1)&(i2)&(i3)&(~i4)&(i5)&(~i6)&(~i7)&(~i8);
    assign sltr = (~i0)&(~i1)&(i2)&(i3)&(~i4)&(~i5)&(i6)&(~i7)&(~i8);
    assign sltur = (~i0)&(~i1)&(i2)&(i3)&(~i4)&(i5)&(i6)&(~i7)&(~i8);
    assign xorr = (~i0)&(~i1)&(i2)&(i3)&(~i4)&(~i5)&(~i6)&(i7)&(~i8);
    assign srlr = (~i0)&(~i1)&(i2)&(i3)&(~i4)&(i5)&(~i6)&(i7)&(~i8);
    assign srar = (~i0)&(~i1)&(i2)&(i3)&(~i4)&(i5)&(~i6)&(i7)&(i8);
    assign orr = (~i0)&(~i1)&(i2)&(i3)&(~i4)&(~i5)&(i6)&(i7)&(~i8);
    assign andr = (~i0)&(~i1)&(i2)&(i3)&(~i4)&(i5)&(i6)&(i7)&(~i8);
    // I_Type
    assign addi = (~i0)&(~i1)&(i2)&(~i3)&(~i4)&(~i5)&(~i6)&(~i7)&(~i8);
    assign addi2 = (~i0)&(~i1)&(i2)&(~i3)&(~i4)&(~i5)&(~i6)&(~i7)&(i8);
    assign slli = (~i0)&(~i1)&(i2)&(~i3)&(~i4)&(i5)&(~i6)&(~i7)&(~i8); 
    assign slti = (~i0)&(~i1)&(i2)&(~i3)&(~i4)&(~i5)&(i6)&(~i7)&(~i8);
    assign sltui = (~i0)&(~i1)&(i2)&(~i3)&(~i4)&(i5)&(i6)&(~i7)&(~i8);
    assign xori = (~i0)&(~i1)&(i2)&(~i3)&(~i4)&(~i5)&(~i6)&(i7)&(~i8);
    assign srli = (~i0)&(~i1)&(i2)&(~i3)&(~i4)&(i5)&(~i6)&(i7)&(~i8);
    assign srai = (~i0)&(~i1)&(i2)&(~i3)&(~i4)&(i5)&(~i6)&(i7)&(i8);
    assign ori = (~i0)&(~i1)&(i2)&(~i3)&(~i4)&(~i5)&(i6)&(i7)&(~i8);
    assign andi = (~i0)&(~i1)&(i2)&(~i3)&(~i4)&(i5)&(i6)&(i7)&(~i8);
    // Load Store
    assign sw = (~i0)&(~i1)&(~i2)&(i3)&(~i4)&(~i5)&(i6)&(~i7)&(~i8);
    assign sh = (~i0)&(~i1)&(~i2)&(i3)&(~i4)&(i5)&(~i6)&(~i7)&(~i8);
    assign sb = (~i0)&(~i1)&(~i2)&(i3)&(~i4)&(~i5)&(~i6)&(~i7)&(~i8);
    assign lb = (~i0)&(~i1)&(~i2)&(~i3)&(~i4)&(~i5)&(~i6)&(~i7)&(~i8);
    assign lh = (~i0)&(~i1)&(~i2)&(~i3)&(~i4)&(i5)&(~i6)&(~i7)&(~i8);
    assign lw = (~i0)&(~i1)&(~i2)&(~i3)&(~i4)&(~i5)&(i6)&(~i7)&(~i8);
    assign lbu = (~i0)&(~i1)&(~i2)&(~i3)&(~i4)&(~i5)&(i6)&(i7)&(~i8);
    assign lhu = (~i0)&(~i1)&(~i2)&(~i3)&(~i4)&(i5)&(~i6)&(i7)&(~i8);
    // load enable 
    assign load_enb = (lb) | (lh) | (lw) | (lbu) | (lhu);
    assign store_enb = (sb) | (sh) | (sw);
    //Jump instructions

    assign jal = (i0)&(i1)&(~i2)&(i3)&(i4)&(~i5)&(~i6)&(~i7)&(~i8);
  	assign jalreverse = (i0)&(i1)&(~i2)&(i3)&(i4)&(i5)&(i6)&(i7)&(i8);
    assign jalr = (i0)&(~i1)&(~i2)&(i3)&(i4)&(~i5)&(~i6)&(~i7)&(~i8);
    // enable for jal
    assign jal_enb = (jal) | (jalr);
    //auipc enable lui enable
    assign lui_enb = (i0)&(~i1)&(i2)&(i3)&(~i4);
    assign auipc_wenb = (i0)&(~i1)&(i2)&(~i3)&(~i4);
    //Branch instructions
    assign beq = (~i0)&(~i1)&(~i2)&(i3)&(i4)&(~i5)&(~i6)&(~i7);
    assign bne = (~i0)&(~i1)&(~i2)&(i3)&(i4)&(i5)&(~i6)&(~i7);
    assign blt = (~i0)&(~i1)&(~i2)&(i3)&(i4)&(~i5)&(~i6)&(i7);
    assign bge = (~i0)&(~i1)&(~i2)&(i3)&(i4)&(i5)&(~i6)&(i7);
    assign bltu = (~i0)&(~i1)&(~i2)&(i3)&(i4)&(~i5)&(i6)&(i7);
    assign bgeu = (~i0)&(~i1)&(~i2)&(i3)&(i4)&(i5)&(i6)&(i7);
    // Enable for branch
  assign branch_enb = (beq) | (bne) | (blt) | (bge) | (bltu) | (bgeu);
    //Selection bit for alu
    assign add = (addr) | (addi);
    assign sll = (sllr) | (slli);
    assign slt = (sltr) | (slti);
    assign sltu = (sltur) | (sltui);
    assign xorrr = (xorr) | (xori);
    assign srl = (srlr) | (srli);
    assign sra = (srar) | (srai);
    assign orrr = (orr) | (ori);
    assign andd = (andr) | (andi);
    assign out0 = (sub)| (sra) | (beq) | (bne) | (blt) | (bge) | (bltu) | (bgeu);
    assign out1 = (xorrr) | (orrr) | (andd) | (blt)  | (bge) | (bltu) | (bgeu) | (srl);
    assign out2 =  (orrr) | (andd) | (beq)  | (bne) | (bltu) | (bgeu) | (slt) | (sltu) ;
    assign out3 =  (sra) | (bne)  | (bge) | (bgeu) | (andd) | (sll) | (srl) | (sltu) ;
    always @(*) begin
        sel = {out0, out1, out2, out3};
    end 

    // write enable and rs2 immediate selection
    assign wenb = (lw) | (jal) | (lh) | (lb) | (addr) | (sub) | (srar) | (sllr) | (orr) | (andr) | (sltur) | (sltr) | (srai) | (xorr) | (srlr) | (andi) | (auipc_wenb) | (ori) | (xori) | (sltui) | (srli) | (slli) | (addi) | (slti) | (sb) | (sh) | (sw) | (lbu) | (lhu) | (jalr) | (lui_enb) | (addi2);
    assign rs2_imm_sel = (lui_enb) | (jal) | (lb) | (lh) |(addi) | (sh) | (sb) | (sw) | (slli) | (srai) | (auipc_wenb) | (ori) | (andi) | (srli) | (xori) | (sltui) | (slti) | (lbu) | (lhu) | (jalr) | (lw) | (jalreverse) | (addi2);
    // Select bit for mux
    assign in_to_pr = ~(jal | jalr | branch_taken);
    always @(*) 
    begin
      casez({branch_taken, jalr, {jal | jalreverse}, in_to_pr})
    		4'b1000 : sel_bit_mux = 2'b11;
    		4'b0100 : sel_bit_mux = 2'b10;
    		4'b0010 : sel_bit_mux = 2'b01;
    		4'b0001 : sel_bit_mux = 2'b00;
    	endcase
    end

endmodule
module data_mem(
    input clk, 
    input load_enb,
    input sb, sh, sw,
    input lb, lh, lw, lbu, lhu,
    input [31:0] address,
    input [31:0] write_data,
    output reg [31:0] read_data
);
  reg [7:0] memory [0:4096];

    
    always @(*) begin
            case (1'b1)
                lb:  read_data = {{24{memory[address][7]}}, memory[address]};  
                lh:  read_data = {{16{memory[address+1][7]}}, memory[address+1], memory[address]};  
                lw:  read_data = {memory[address+3], memory[address+2], memory[address+1], memory[address]};  
                lbu: read_data = {24'b0, memory[address]};  
                lhu: read_data = {16'b0, memory[address+1], memory[address]};  
                default: read_data = 32'b0;
            endcase
            read_data = 32'b0;
        
    end

    always @(posedge clk) begin
        if (sb) begin
            memory[address] <= write_data[7:0]; 
        end
        else if (sh) begin
            memory[address] <= write_data[7:0]; 
            memory[address+1] <= write_data[15:8];  
        end
        else if (sw) begin
            memory[address]   <= write_data[7:0];
            memory[address+1] <= write_data[15:8];
            memory[address+2] <= write_data[23:16];
            memory[address+3] <= write_data[31:24];  
        end
    end
endmodule
module decoder(
    input [31:0] instruction,
    output [4:0] rs1, rs2, rdi
);
    assign rs1 = instruction[19:15];
    assign rs2 = instruction[24:20];
    assign rdi = instruction[11:7];
endmodule
module IF_ID (
    input wire clk,rst,
    input wire [31:0] instruction_in,pcplus4_in,
    output reg [31:0] instruction_out,pcplus4_out,
    input wire stall,flush
);
    always @(posedge clk or posedge rst) begin
        if (rst || flush) begin
            instruction_out <= 32'b0;
            pcplus4_out <= 32'b0;
        end
        else if (!stall) begin
            instruction_out <= instruction_in;
            pcplus4_out <= pcplus4_in;
        end
    end
    
endmodule
module forwarding_unit (
    input wire [4:0] ex_rs1,ex_rs2,id_rs1,id_rs2,
    input wire [4:0] mem_rd,wb_rd,
    input wire mem_wenb,wb_wenb,clk,mem_wb,
    output reg [1:0] forward_a,forward_b
);
    always @(*) begin
        if ((mem_wenb || mem_wb) && mem_rd != 0 && mem_rd == ex_rs1) begin 
            forward_a = 2'b10;
        end
        else if (wb_wenb &&  wb_rd != 0 && wb_rd == ex_rs1) begin
            forward_a = 2'b01;
        end
        else if (wb_wenb && wb_rd != 0 && wb_rd == id_rs1) begin
            forward_a = 2'b11;
        end
        else begin
            forward_a = 2'b00;
        end

        if ((mem_wenb || mem_wb) && mem_rd != 0 && mem_rd == ex_rs2) begin
            forward_b = 2'b10;
        end
        else if (wb_wenb && wb_rd !=0 && wb_rd == ex_rs2) begin
            forward_b = 2'b01;
        end
        else if (wb_wenb && wb_rd != 0 && wb_rd == id_rs2) begin
            forward_b = 2'b11;
        end
        else begin
            forward_b = 2'b00;
        end
    end

endmodule
module hazard_detction(
    input wire [4:0] id_rs1,id_rs2,
    input wire [4:0] ex_rd,
    input wire ex_load_enb,
    input wire branch_taken,jal_enb,
    output wire stall,flush
);
    assign stall = branch_taken;
    assign flush = branch_taken;

endmodule
module fetch (
    input wire clk,rst,
  	input wire [1:0] sel,
    input wire [31:0] pc_plus_4,pc_plus_imm, pc_plus_imm_2,rs1_plus_imm_for_jalr,
    input wire stall,
    output wire [31:0] instruction,
    output wire [31:0] pc_out
);
    wire [31:0] pc, pc_next;

    pc PC (
        .clk(clk),
        .rst(rst),
        .pc_next(pc_next),
        .pc_write(!stall),
        .pc_out(pc)
    );

    instruction_mem IM (
        .addr(pc),
        .instruction(instruction)
    );
	
  	mux_4to1 mux4 (
    .sel(sel),
    .pc_plus_4(pc_plus_4),
    .pc_plus_imm(pc_plus_imm),
    .pc_plus_imm_2(pc_plus_imm_2),
    .rs1_plus_imm_for_jalr(rs1_plus_imm_for_jalr),
    .out(pc_next)
  );
  assign pc_out = pc_plus_4;
endmodule
// Code your design here
module immediate_generator(
  input [31:0] instruction,
  output reg [31:0] imm,
  output reg [3:0] sel
);
  always @(*) begin
    casez (instruction[6:0])
      7'b0010011: sel = 4'b0000; // I-type
      7'b0100011: sel = 4'b0001; // S-type
      7'b1100011: sel = 4'b0010; // B-type
      7'b0110111: sel = 4'b0011; // U-type (LUI)
      7'b1101111: sel = 4'b0100; // J-type (JAL)
      7'b0110011: sel = 4'b0101; // R-type
      7'b0000011: sel = 4'b0110; // I-type (Load)
      7'b1100111: sel = 4'b0111; // JALR (I-type format)
      7'b0010111: sel = 4'b0011; // U-type (AUIPC)
      default: sel = 4'b1111; // Default case
    endcase
  end

  always @(*) begin
    case (sel)
      4'b0000: imm = {{20{instruction[31]}}, instruction[31:20]}; // I-type
      4'b0001: imm = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]}; // S-type
      4'b0010: imm = {{19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0}; // B-type
      4'b0011: imm = {instruction[31:12], 12'b0}; // U-type (LUI/AUIPC, no sign extension)
      4'b0100: imm = {{11{instruction[31]}}, instruction[31], instruction[19:12], instruction[20], instruction[30:21], 1'b0}; // J-type (JAL)
      4'b0101: imm = 32'b0; // R-type (no immediate)
      4'b0110: imm = {{20{instruction[31]}}, instruction[31:20]}; // I-type (Load)
      4'b0111: imm = {{20{instruction[31]}}, instruction[31:20]}; // JALR (same as I-type)
      default: imm = 32'b0; // Default case
    endcase
  end
endmodule
module EX_MEM (
    input wire clk,rst,
    input wire wb_in,load_enb_in,sb_in,sh_in,sw_in,store_enb_in,
    input wire [31:0] alu_result_in, store_data_in,
    input wire [4:0] rd_in,rs1_in,rs2_in,
    output reg wb_out,load_enb_out,sb_out,sh_out,sw_out,store_enb_out,
    output reg [31:0] alu_result_out,store_data_out,
    output reg [4:0] rd_out,rs1_out,rs2_out,
    input wire flush
);
    always @(posedge clk or posedge rst) begin
        if (rst || flush) begin
            wb_out <= 1'b0; load_enb_out <= 1'b0; sb_out <= 1'b0; sh_out <= 1'b0; sw_out <= 1'b0;
            alu_result_out <= 32'b0; store_data_out <= 32'b0;
            rd_out <= 5'b0;rs1_out<=5'b0;store_enb_out<=0;
        end
        else begin 
            wb_out <= wb_in; load_enb_out <= load_enb_in; sb_out <= sb_in; sh_out <= sh_in; sw_out <= sw_in;
            alu_result_out <= alu_result_in; store_data_out <= store_data_in;
            rd_out <=rd_in;store_enb_out<=store_enb_in;
        end
    end
    
endmodule
module MEM_WB (
    input wire clk,rst,
    input wire wenb_in,load_enb_in, jal_enb_in,lui_enb_in,auipc_wenb_in,
    input wire [31:0] mem_data_in,alu_result_in,pcplus4_in,
    input wire [4:0] rd_in,
    output reg wenb_out,load_enb_out,jal_enb_out,lui_enb_out,auipc_wenb_out,
    output reg [31:0] mem_data_out, alu_result_out, pcplus4_out,
    output reg [4:0] rd_out
);
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            wenb_out <= 1'b0; load_enb_out <= 1'b0; jal_enb_out <= 1'b0; lui_enb_out <= 1'b0;
            auipc_wenb_out <= 1'b0;
            mem_data_out <= 32'b0; alu_result_out <= 32'b0; pcplus4_out <= 32'b0;
            rd_out <= 5'b0;
        end
        else begin
            wenb_out <= wenb_in; load_enb_out <= load_enb_in; jal_enb_out <= jal_enb_in; lui_enb_out <= lui_enb_in; auipc_wenb_out <= auipc_wenb_in;
            mem_data_out <= mem_data_in; alu_result_out <= alu_result_in; pcplus4_out <= pcplus4_in;
            rd_out <= rd_in;
        end
    end
endmodule
module instruction_mem (
    input wire [31:0] addr,
    output wire [31:0] instruction
);
  reg [31:0] memory [0:4096];

    initial begin
        $readmemh("instructions.hex", memory); 
    end

    assign instruction = memory[addr >> 2]; 

endmodule
module pc_plus_4(
    input wire [31:0] pc,        
    output wire [31:0] pc_plus4  
);
    assign pc_plus4 = pc + 32'd4;  
endmodule
module mux_rs2 (
    input [31:0] rs2,   
    input [3:0] sel_bit, 
    output reg [31:0] output_data_forstore 
);

    always @(*) begin
      case (sel_bit)
            4'b0000: output_data_forstore = rs2;                 
            4'b0010: output_data_forstore = {24'b0, rs2[7:0]};   
            4'b0100: output_data_forstore = {16'b0, rs2[15:0]};  
            default: output_data_forstore = 32'b0;               
        endcase
    end

endmodule
module mux2to1(
	input wire [31:0] imm_input,
  input wire [31:0] reg_input,
	input select,
	output wire [31:0] out
);
	assign out = select ? imm_input : reg_input;
endmodule	
module mux_4to1(
  	input [1:0] sel,
    input [31:0] pc_plus_4,
  	input [31:0] pc_plus_imm, pc_plus_imm_2,
    input [31:0] rs1_plus_imm_for_jalr,
    output reg [31:0] out
);

    always @(*) begin
        case (sel)
            2'b00: out = pc_plus_4;
            2'b01: out = pc_plus_imm;
            2'b10: out = rs1_plus_imm_for_jalr;
            2'b11: out = pc_plus_imm_2; 
            default: out = 32'b0; 
        endcase
    end

endmodule
module mux8to1(
    input wire [31:0] alu_result, load_result, pc_plus_4, pc_plus_imm, imm_for_b_type, // Data inputs
    input wire [2:0] sel, // Select signal from encoder
    output reg [31:0] out // MUX output
);
    always @(*) begin
        case (sel)
            3'b000: out = alu_result;     // ALU result
            3'b001: out = load_result;    // Load result
            3'b010: out = pc_plus_4;      // PC + 4
            3'b011: out = pc_plus_imm;    // PC + IMM
            3'b100: out = imm_for_b_type; // IMM for B-type
            default: out = 32'b0;         // Default case
        endcase
    end
endmodule
module pc (
    input wire clk,             
    input wire rst,             
    input wire [31:0] pc_next,  
    input wire pc_write,        
    output reg [31:0] pc_out    
);
    always @(posedge clk or posedge rst) begin
        if (rst)
            pc_out <= 32'h00000000; 
        else if (pc_write)
            pc_out <= pc_next;      
    end
endmodule
module prienc(
	input wire enable,
	output wire mux_select
);
	assign mux_select = enable;
endmodule
module priority_encoder_8to3 (
    input wire alu_result,     
    input wire load_enable,    
    input wire jal_enb,        
    input wire enable_for_auipc,
    input wire lui_enable,      
    output reg [2:0] sel        
);
  assign alu_result = ~(lui_enable | enable_for_auipc | jal_enb | load_enable);
    wire [4:0] input_concat = {lui_enable, enable_for_auipc, jal_enb, load_enable, alu_result};

    
    always @(*) begin
        casez (input_concat)
            5'b1????: sel = 3'b100; // LUI enable
            5'b01???: sel = 3'b011; // AUIPC enable
            5'b001??: sel = 3'b010; // JAL enable
            5'b0001?: sel = 3'b001; // Load enable
            5'b00001: sel = 3'b000; // ALU result
            default:  sel = 3'b000; // Default (ALU result)
        endcase
    end
endmodule
module regfile (
    input clk, reset, enable,
    input [31:0] data_in,
    input [4:0] rs1, rs2, rd_select,
  	output reg [31:0] data_out1, data_out2
);
    reg [31:0][31:0] registers ;
    integer i; 
    always @(*) begin
        data_out1 = (rs1 == 0) ? 32'b0 : registers[rs1];
        data_out2 = (rs2 == 0) ? 32'b0 : registers[rs2];
    end   
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1)
                registers[i] <= 32'b0;
        end
        else if (enable && rd_select != 0) begin
            registers[rd_select] <= data_in;  // Write only if not x0
        end
    end

endmodule
module rs1_plus_imm(
	input [31:0] rs1, imm_input,
	output reg [31:0] rs1_plus_im
);
	always @(*) begin 
        rs1_plus_im = rs1+imm_input+4;
    end 
endmodule
module rs2orimm(
	input [31:0] rs2, imm,
	input select,
	output reg [31:0] dataB
);
	always @(*)
	begin
		dataB = select ? imm : rs2;
	end
endmodule