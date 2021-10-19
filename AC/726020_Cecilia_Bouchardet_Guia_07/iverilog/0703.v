// -------------------------
// Exemplo_0701 - GATES
// Nome: Cecilia Caprucho Bouchardet
// Matricula: 726020
// -------------------------
// -------------------------
// f7_gate
// -------------------------
module f7 ( output x, //saida and
output y, //saida nand
output i,//saida or
output j, // saida nor
input a, // entarda 
input b );// entrada 
// descrever por portas
or OR (i, a, b);
nor NOR ( j, a, b);
and AND (x, a , b);
nand NAND ( y, a, b );
endmodule // f7
// -------------------------
// multiplexer
// -------------------------
module mux1 ( output s,
input a,
input b,
input select);
// definir dados locais
    wire not_select;
    wire sa;
    wire sb;
    // descrever por portas
    not NOT1 ( not_select, select );//negar a chave para ser 0 ou 1
    and AND1 ( sa, a, not_select ); // porta 0
    and AND2 ( sb, b, select );//porta 1
    or OR1 ( s , sa, sb );//seleção das portas
endmodule // mux

module mux2 ( output s,
input a,
input b,
input select);
// definir dados locais
    wire not_select;
    wire sa;
    wire sb;
    // descrever por portas
    not NOT1 ( not_select, select );//negar a chave para ser 0 ou 1
    and AND1 ( sa, a, not_select ); // porta 0
    and AND2 ( sb, b, select );//porta 1
    or OR1 ( s , sa, sb );//seleção das portas
endmodule // mux

module mux3 ( output s,
input a,
input b,
input select);
// definir dados locais
    wire not_select;
    wire sa;
    wire sb;
    // descrever por portas
    not NOT1 ( not_select, select );//negar a chave para ser 0 ou 1
    and AND1 ( sa, a, not_select ); // porta 0
    and AND2 ( sb, b, select );//porta 1
    or OR1 ( s , sa, sb );//seleção das portas
endmodule // mux
module test_f7;
    // ------------------------- definir dados
    reg x; //entrada1
    reg y; //entrada2;
    reg s; //chave
    reg t;//chave2
    wire w; //saida1
    wire v; // saida2
    wire i; // saida3
    wire j; //saida4
    wire z; //saida mux
    wire a;
    wire b;
    f7 modulo ( w, v, i, j, x, y );
    mux1 MUX1 ( z, w, v, s );
    mux2 MUX2 ( a, i, j, s );
    mux3 MUX3 ( b, z, a, t );
    // ------------------------- parte principal
    initial
        begin : main
            $display("Exemplo_0701 -  Cecilia Caprucho Bouchardet - 726020");
            $display("Test LU's module");
            $display("   x    y    s    t    b");
            x = 1'b0; y = 1'b0; s = 1'b0; t = 1'b0; 
            // projetar testes do modulo
            #1 $monitor("%4b %4b %4b %4b %4b", x, y, s, t, b);
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