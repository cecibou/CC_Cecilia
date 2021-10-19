// -------------------------
// Exemplo_0801 - FULL ADDER
// Nome: Cecilia Capurucho Bouchardet
// Matricula: 726020
// -------------------------
// -------------------------
// half adder
// -------------------------
module compDesigual (output s1,
input a,
input b);
// descrever por portas
xor XOR1 ( s1, a, b );
endmodule // compDesigual
// -------------------------
// full adder
// -------------------------
module comp6 ( output s1,
input a1,
input b1, );
wire saida1;

// descrever por portas e/ou 
compDesigual CD(saida1, a1, b1 );

or OR(s1, saida1 );

endmodule // comp6
module test_comp6;
// ------------------------- definir dados
reg [4:0] x;
reg [4:0] y;
//wire [4:0] carry; // “vai-um”
wire [4:0] Desigual;
comp6 FA0 ( Desigual[0], x[0], y[0] );
comp6 FA1 ( Desigual[1], x[1], y[1] );
comp6 FA2 ( Desigual[2], x[2], y[2] );
comp6 FA3 ( Desigual[3], x[3], y[3] );
comp6 FA4 ( Desigual[4], x[4], y[4] );

// ------------------------- parte principal
initial begin
    $display("Exemplo0801 - Cecilia Capurucho Bouchardet - 726020");
    $display("Test LU’s comparador de desigualdade");
    // projetar testes do Desigualador completo
    $monitor("%5b != %5b => %5b", x, y, Desigual);

    #1 x = 5'b01000; y = 5'b01000;
    #1 x = 5'b01010; y = 5'b01010;
    #1 x = 5'b01111; y = 5'b01111;
    #1 x = 5'b00110; y = 5'b00110;
    #1 x = 5'b01100; y = 5'b00110;
            
end
endmodule // test_comp6