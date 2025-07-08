/* verilator lint_off WIDTHEXPAND */
module sram #(
    parameter NUM_WMASKS = 4,
    parameter DATA_WIDTH = 32,
    parameter ADDR_WIDTH = 13,
    parameter RAM_DEPTH = 1 << ADDR_WIDTH,
    parameter DELAY = 0,
    parameter IZERO = 0 ,
    parameter IFILE = ""
) (
    input clk,
    input csb,web,
    input [NUM_WMASKS-1:0] wmask,
    input [ADDR_WIDTH-1:0] addr,
    input [DATA_WIDTH-1:0] din,
    output wire [DATA_WIDTH-1:0] dout
);
    reg csb_reg;
    reg web_reg;
    reg [NUM_WMASKS-1:0] wmask_reg;
    reg [ADDR_WIDTH-1:0] addr_reg;
    reg [DATA_WIDTH-1:0] din_reg;
    reg [DATA_WIDTH-1:0] dout_reg;

    always @(posedge clk) begin
        csb_reg = csb;
        web_reg = web;
        wmask_reg = wmask;
        addr_reg = addr;
        din_reg = din;
        dout_reg = dout;
    end
    integer i;
    reg [DATA_WIDTH-1:0] mem [0:RAM_DEPTH-1];
    initial begin
        if (IZERO) begin
            for (i=0; i<RAM_DEPTH; i=i+1) mem[i] = {DATA_WIDTH{1'b0}};
        end
        else begin
            if (IFILE != "") $readmemh(IFILE, mem) ;
        end
    end
    always @(posedge clk) begin 
        if (web_reg) begin
            if (wmask_reg[0]) begin
                mem[addr_reg[12:0]] <= din_reg[7:0];
            end
            if (wmask_reg[1]) begin
                mem[addr_reg[12:0]+1] <= din_reg[15:8];
            end
            if (wmask_reg[2]) begin
                mem[addr_reg[12:0]+2] <= din_reg[23:16];
            end
            if (wmask_reg[3]) begin
                mem[addr_reg[12:0]+3] <= din_reg[31:24];
            end
        end
    end 
        assign dout = mem[addr];
    
endmodule