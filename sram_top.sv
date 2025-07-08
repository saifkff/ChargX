/* verilator lint_off ASSIGNDLY */
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off WIDTH */
/* verilator lint_off UNUSED */
/* verilator lint_off SYNCASYNCNET */
module sram_top #(
    parameter IFILE_IN = ""
) (
    input logic clk_i,
    input logic rst_i,
    input logic csb_i,
    input logic [12:0] addr_i,
    input logic [31:0] wdata_i,
    input logic [3:0] wmask_i,
    input logic we_i,
    output logic [31:0] rdata_o
);
    logic csb;
    logic [12:0] addr_o;
    logic [31:0] wdata_o;
    logic [3:0] wmask_o;
    logic we_o;
    logic [31:0] rdata_i;
    always @(posedge clk_i) begin
        if (rst_i) begin
            csb <= '1;
            addr_o <= '0;
            wdata_o <= '0;
            wmask_o <= '0;
            we_o <= '1;
        end else begin
            csb <= csb_i;
            addr_o <= addr_i;
            wdata_o <= wdata_i;
            wmask_o <= wmask_i;
            we_o <= we_i;
        end
    end
    sram #(
        .NUM_WMASKS(4),
        .DATA_WIDTH(32),
        .ADDR_WIDTH(13),
        .RAM_DEPTH(1 << 13),
        .DELAY(0),
        .IZERO(0)
    ) memory (
        .clk(clk_i),
        .csb(csb_i),
        .web(we_i),
        .wmask(wmask_i),
        .addr(addr_i),
        .din(wdata_i),
        .dout(rdata_o)
    );
endmodule