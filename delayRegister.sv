module delayRegister (
    input clk,rst,
    input [3:0] wmask_in,
    input [4:0] rs1_in,rs2_in,
    input [31:0] instruction_in,
    input [31:0] rs1_data_in, rs2_data_in,
    input [31:0] current_pc_in,
    input [31:0] pc_w_in,
    input [31:0] store_data_in,
    output reg [3:0] wmask_out,
    output reg [4:0] rs1_out,rs2_out,
    output reg [31:0] instruction_out,
    output reg [31:0] rs1_data_out,rs2_data_out,
    output reg [31:0] current_pc_out,
    output reg [31:0] pc_w_out,
    output reg [31:0] store_data_out
);

    reg [31:0] instruction_1_delay ; 
    reg [31:0] rs1_data_1_delay, rs2_data_1_delay;
    reg [31:0] pc_w_1_delay ;
    
    always @(posedge clk) begin
        if (rst) begin
            wmask_out <= 4'b0;
            rs1_out <= 5'b0;
            rs2_out <= 5'b0;
            instruction_out <= 32'b0;
            rs1_data_out <= 32'b0;
            rs2_data_out <= 32'b0;
            current_pc_out<=32'b0;
            pc_w_out<=32'b0;
            store_data_out<=32'b0;
        end
        else begin
            wmask_out <= wmask_in;
            rs1_out <= rs1_in;
            rs2_out <= rs2_in;
            instruction_1_delay <= instruction_in;
            instruction_out <= instruction_1_delay;
            rs1_data_1_delay <= rs1_data_in;
            rs2_data_1_delay <= rs2_data_in;
            rs1_data_out <= rs1_data_1_delay;
            rs2_data_out <= rs2_data_1_delay;
            current_pc_out<=current_pc_in;
            pc_w_1_delay<=pc_w_in;
            pc_w_out<=pc_w_1_delay;
            store_data_out<=store_data_in;
        end
    end 
    
endmodule