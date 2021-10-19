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
output i,
output j,
output k,
input a,
input b );
// descrever por portas

not NOT(x, a);
and AND(y, a, b);
nand NAND(w, a, b);
xor XOR(z, a, b);
xnor XNOR(i, a, b);
or XOR(j, a, b);
nor NOR(k, a, b);


endmodule // f7
// -------------------------
// multiplexer
// -------------------------
module mux ( output s,
input a,
input b,
input c,
input d,
input e,
input f,
input g,
input select,
input select2,
input select3);
// definir dados locais
    wire not_select;
    wire not_select2;
    wire not_select3;
    wire sa;
    wire sb;
    wire sc;
    wire sd;
    wire se;
    wire sf;
    wire sg;
    // descrever por portas
    not NOT1 ( not_select, select );
    not NOT1 ( not_select2, select2 );//negar a chave para ser 0 ou 1
    not NOT1 ( not_select3, select3 );
    and AND1 ( sa, a, not_select, not_select2, not_select3 ); // porta 000
    and AND2 ( sb, b, not_select, not_select2, select3 );//porta 001
    and AND3 ( sc, c, not_select, select2, not_select3 ); // porta 010
    and AND4 ( sd, d, not_select, select2, select3 ); // porta 011
    and AND5 ( se, e, select, not_select2, not_select3 ); // porta 100
    and AND6 ( sf, f, select, not_select2, select3 ); // porta 101
    and AND7 ( sg, g, select, select2, not_select3 );//porta 110
    or OR1 ( s , sa, sb, sc, sd, se, sf, sg );//seleção das portas
endmodule // mux

module test_f7;
    // ------------------------- definir dados
    reg x; //entrada1
    reg y; //entrada2;
    reg s; //chave
    reg t; //chave2
    reg u; //chave3
    wire w; //saida1
    wire v; //saida2
    wire i; // saida3
    wire j; // saida4
    wire k; //saida5
    wire l; // saida6
    wire m; //saida7
    wire z; //saida mux
    f7 modulo ( w, v, i, j, k, l, m, x, y);
    mux MUX1 ( z, w, v, i, j, k, l, m, s, t, u );
    // ------------------------- parte principal
    initial
        begin : main
            $display("Exemplo_0701 -  Cecilia Caprucho Bouchardet - 726020");
            $display("Test LU's module");
            $display("   x    y    stu    z");
            x = 1'b0; y = 1'b0; s = 1'b0;  t = 1'b0; u = 1'b0;
            // projetar testes do modulo
            #1 $monitor("%4b %4b %4b%1b%1b %4b", x, y, s, t, u, z);
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1;
            #1 s = 1'b0; t = 1'b0; u = 1'b1;
            $display("");
            #1 x = 1'b0; y = 1'b0; 
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1;
            #1 s = 1'b0; t = 1'b1; u = 1'b0;
            $display("");
            #1 x = 1'b0; y = 1'b0; 
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1;
            #1 s = 1'b0; t = 1'b1; u = 1'b1;
            $display("");
            #1 x = 1'b0; y = 1'b0; 
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1;
            #1 s = 1'b1; t = 1'b0; u = 1'b0;
            $display("");
            #1 x = 1'b0; y = 1'b0; 
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1;
            #1 s = 1'b1; t = 1'b0; u = 1'b1;
            $display("");
            #1 x = 1'b0; y = 1'b0; 
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1;
            #1 s = 1'b1; t = 1'b1; u = 1'b0;
            $display("");
            #1 x = 1'b0; y = 1'b0; 
            #1 x = 1'b0; y = 1'b1;
            #1 x = 1'b1; y = 1'b0;
            #1 x = 1'b1; y = 1'b1;            
        end
endmodule // test_f7
/*
TABELA VERDADE
   x    y    stu    z
   0    0    000    1
   0    1    000    1
   1    0    000    0
   1    1    000    0

   1    1    001    1
   0    0    001    0
   0    1    001    0
   1    0    001    0
   1    1    001    1

   1    1    010    0
   0    0    010    1
   0    1    010    1
   1    0    010    1
   1    1    010    0

   1    1    011    0
   0    0    011    0
   0    1    011    1
   1    0    011    1
   1    1    011    0

   1    1    100    1
   0    0    100    1
   0    1    100    0
   1    0    100    0
   1    1    100    1

   1    1    101    1
   0    0    101    0
   0    1    101    1
   1    0    101    1
   1    1    101    1

   1    1    110    0
   0    0    110    1
   0    1    110    0
   1    0    110    0
   1    1    110    0

Desculpa por n fazer os extras, a questão em C de AEDS me deixou louca rss.

*/