// -------------------------
// Exemplo_0801 - FULL ADDER
// Nome: Cecilia Capurucho Bouchardet
// Matricula: 726020
// -------------------------
// -------------------------
// half adder
// -------------------------
module halfAdder (output s1,
output s0,
input a,
input b);
// descrever por portas
xor XOR1 ( s0, a, b );
and AND1 ( s1, a, b );
endmodule // halfAdder
// -------------------------
// full adder
// -------------------------
module fullAdder ( output s1,
output s0,
input a1,
input b1,
input carryIn );
wire saida1;
wire saida2;
wire saida3;
// descrever por portas e/ou 
halfAdder HA(saida1, saida2, a1, b1 );
halfAdder HA2(saida3, s0, carryIn, saida2 );
or OR(s1, saida1, saida3);

endmodule // fullAdder
module test_fullAdder;
// ------------------------- definir dados
reg [3:0] x;
reg [3:0] y;
wire [3:0] carry; // “vai-um”
wire [3:0] soma;
fullAdder FA0 ( carry[0], soma[0], x[0], y[0], 1'b0 );
fullAdder FA1 ( carry[1], soma[1], x[1], y[1], carry[0] );
fullAdder FA2 ( carry[2], soma[2], x[2], y[2], carry[1] );
fullAdder FA3 ( carry[3], soma[3], x[3], y[3], carry[2] );

// ------------------------- parte principal
initial begin
    $display("Exemplo0801 - Cecilia Capurucho Bouchardet - 726020");
    $display("Test ALU’s full adder");
    // projetar testes do somador completo
    $monitor("%4b + %4b = %4b %4b", x, y, soma, carry);

    #1 x = 4'b0100; y = 4'b0100;
    #1 x = 4'b0101; y = 4'b0001;
    #1 x = 4'b0111; y = 4'b0111;
    #1 x = 4'b0011; y = 4'b0110;
    #1 x = 4'b0110; y = 4'b0011;
            
end
endmodule // test_fullAdder