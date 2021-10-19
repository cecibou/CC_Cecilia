// -------------------------
// Exemplo_0801 - FULL ADDER
// Nome: Cecilia Capurucho Bouchardet
// Matricula: 726020
// -------------------------
// -------------------------
// half adder
// -------------------------
module comp2 (output s1,
output s0,
input a,
input carryIn);
wire nota;
// descrever por portas
not NOT (nota, a);
and AND ( s0, nota, carryIn);
nor NOR1 ( s1, nota, carryIn );
endmodule // comp2
// -------------------------
// full adder
// -------------------------
module comp5 ( output s1,
input a1,
input b1, );

// descrever por portas e/ou 
comp2 C2(s1, a1, b1 );

endmodule // comp5
module test_comp5;
// ------------------------- definir dados
reg [5:0] x;
reg [5:0] y;
wire [5:0] comp2;
comp5 FA0 ( comp2[0], x[0] );
comp5 FA1 ( comp2[1], x[1] );
comp5 FA2 ( comp2[2], x[2] );
comp5 FA3 ( comp2[3], x[3] );
comp5 FA4 ( comp2[4], x[4] );
comp5 FA5 ( comp2[5], x[5] );

// ------------------------- parte principal
initial begin
    $display("Exemplo0801 - Cecilia Capurucho Bouchardet - 726020");
    $display("Test ALU’s complemento de 2");
    // projetar testes do comp2ador completo
    $monitor("%6b => %6b" x, comp2);

    #1 x = 6'b01000; y = 6'b000000;
    #1 x = 6'b11010; y = 6'b000000;
    #1 x = 6'b11111; y = 6'b000000;
    #1 x = 6'b01110; y = 6'b000000;
    #1 x = 6'b11100; y = 6'b000000;
            
end
endmodule // test_comp5

/*
--------------------------------------------------------
Theldo, os exercicios 3,4,5 em verilog sinto que falta alguma coisa para ficar totalmente certo.
--------------------------------------------------------
Me desculpe por não conseguir fazer os extras pois, estou estudando para a prova de AEDS, que será 28 e 29. 
---------------------------------------------------------
*/