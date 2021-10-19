module FXYZ (output S1, input X, input Y, input Z);
assign s1 = ( X | ~Y | Z ) & (~X | Y | ~Z);

endmodule // FXYZ