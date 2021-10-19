module fxyz (output a,b,c,d,e
input x, y, z);
assign a = x | ~(y & ~z);
assign b = (x & ~y) | ~z;
assign c = ~( x | ~y ) | z;
assign d = ~( x | y ) | z
assign e = ( ~x & y ) | ( y & z)
endmodule // fxyz