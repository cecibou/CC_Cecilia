// -------------------------
// Exemplo_0701 - GATES
// Nome: Cecilia Caprucho Bouchardet
// Matricula: 726020
// -------------------------
// -------------------------
// f7_gate
// -------------------------
module f7 ( output x,
output y,
output w,
output z, 
input a,
input b );
// descrever por portas

xor XOR ( x, a, b);
xnor XNOR (y, a, b);
or OR (w, a, b);
nor NOR(z, a, b);


endmodule // f7
// -------------------------
// multiplexer
// -------------------------
module mux ( output s,
input a,
input b,
input c,
input d,
input select,
input select2);
// definir dados locais
    wire not_select;
    wire not_select2;
    wire sa;
    wire sb;
    wire sc;
    wire sd;
    // descrever por portas
    not NOT1 ( not_select, select );
    not NOT1 ( not_select2, select2 );//negar a chave para ser 0 ou 1
    and AND1 ( sa, a, not_select, not_select2 ); // porta 00
    and AND2 ( sb, b, not_select, select2 );//porta 01
    and AND3 ( sc, c, select, not_select2 ); // porta 10
    and AND4 ( sd, d, select, select2 );//porta 11
    or OR1 ( s , sa, sb, sc, sd );//seleção das portas
endmodule // mux

module test_f7;
    // ------------------------- definir dados
    reg x; //entrada1
    reg y; //entrada2;
    reg s; //chave
    reg t; //cahve2
    wire w; //saida1
    wire v; //saida2
    wire i; // saida3
    wire j; // saida4
    wire z; //saida mux
    f7 modulo ( w, v, i, j, x, y);
    mux MUX1 ( z, w, v, i, j, s, t );
    // ------------------------- parte principal
    initial
        begin : main
            $display("Exemplo_0701 -  Cecilia Caprucho Bouchardet - 726020");
            $display("Test LU's module");
            $display("   x    y    st    z");
            x = 1'b0; y = 1'b1; s = 1'b0;  t = 1'b0;
            // projetar testes do modulo
            #1 $monitor("%4b %4b %4b%1b %4b", x, y, s, t, z);
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1;
            #1 s = 1'b0; t = 1'b1;
            $display("");
            #1 x = 1'b0; y = 1'b0;
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1;
            #1 s = 1'b1; t = 1'b0;
            $display("");
            #1 x = 1'b0; y = 1'b0;
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1;
            #1 s = 1'b1; t = 1'b1;
            $display("");
            #1 x = 1'b0; y = 1'b0;
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1; 
        end
endmodule // test_f7
/*
TABELA VERDADE
   x    y    s    t    b
   0    0    0    0    0
   0    1    0    0    0
   1    0    0    0    0
   1    1    0    0    1

   1    1    0    1    1
   0    0    0    1    0
   0    1    0    1    1
   1    0    0    1    1
   1    1    0    1    1

   1    1    1    0    0
   0    0    1    0    1
   0    1    1    0    1
   1    0    1    0    1
   1    1    1    0    0

   1    1    1    1    0
   0    0    1    1    1
   0    1    1    1    0
   1    0    1    1    0
   1    1    1    1    0
*/