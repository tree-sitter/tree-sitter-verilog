/*
  zoo module
*/

`resetall
`undefineall
`include "isa.vh"
`undef D
`define D(x, y) initial $display("start", x, y)

module add_sub (x, y, z, sign);

  parameter WIDTH = 8;

  input [WIDTH-1:0] x, y;
  output [WIDTH-1:0] z;
  input sign;

wire [WIDTH-1:0] add, sub;

// logic
assign add = x + y;
assign sub = x - y;
assign z = sign ? sub : add;

`D(5, 7);

endmodule: add_sub


module alu (
  input [31:0] a,
  input [31:0] b,
  output [31:0] res,
  input clk
);

wire [31:0] tmp;

add_sub #(32) u0 (
  .x(a), .y(b), .z(tmp), .sign(1'b0)
);

assign res = tmp;

endmodule
