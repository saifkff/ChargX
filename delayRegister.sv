module delayRegister (
    input clk,rst,
    input [3:0] wmask_in,
    input [4:0] rs1_in,rs2_in,
    output reg [3:0] wmask_out,
    output reg [4:0] rs1_out,rs2_out
);
     
    // reg wmask_1_delay_reg
    always @(posedge clk) begin
        if (rst) begin
            wmask_out <= 4'b0;
            rs1_out <= 5'b0;
            rs2_out <= 5'b0;
        end
        else begin
            wmask_out <= wmask_in;
            rs1_out <= rs1_in;
            rs2_out <= rs2_in;
        end
    end 
    
endmodule