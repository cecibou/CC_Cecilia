// -------------------------
// Exemplo_0801 - FULL ADDER
// Nome: Cecilia Capurucho Bouchardet
// Matricula: 726020
// -------------------------
// -------------------------
// half adder
// -------------------------
module compIgual (output s1,
input a,
input b);
// descrever por portas
nor NOR1 ( s1, a, b );
endmodule // compIgual
// -------------------------
// full adder
// -------------------------
module comp6 ( output s1,
input a1,
input b1, );
wire saida1;

// descrever por portas e/ou 
compIgual CI(saida1, a1, b1 );

and AND(s1, saida1 );

endmodule // comp6
module test_comp6;
// ------------------------- definir dados
reg [4:0] x;
reg [4:0] y;
//wire [4:0] carry; // “vai-um”
wire [4:0] igual;
comp6 FA0 ( igual[0], x[0], y[0] );
comp6 FA1 ( igual[1], x[1], y[1] );
comp6 FA2 ( igual[2], x[2], y[2] );
comp6 FA3 ( igual[3], x[3], y[3] );
comp6 FA4 ( igual[4], x[4], y[4] );

// ------------------------- parte principal
initial begin
    $display("Exemplo0801 - Cecilia Capurucho Bouchardet - 726020");
    $display("Test LU’s comparador igualdade");
    // projetar testes do igualador completo
    $monitor("%5b = %5b => %5b", x, y, igual);

    #1 x = 5'b01000; y = 5'b01000;
    #1 x = 5'b01010; y = 5'b01010;
    #1 x = 5'b01111; y = 5'b01111;
    #1 x = 5'b00110; y = 5'b00110;
    #1 x = 5'b01100; y = 5'b00110;
            
end
endmodule // test_comp6