// -------------------------
// Exemplo_0501 - GATES
// Nome: Cecilia Capurucho Bouchardet
// Matricula: 726020
// -------------------------
// -------------------------
// f5_gate
// m a b s
// 0 0 0 0
// 1 0 1 1 <- a'.b
// 2 1 0 0
// 3 1 1 0
//
// -------------------------
module f5a ( output s,
 input a,
 input b );
// definir dado local
 wire not_a;
 wire aux_s;
 wire aux_a;
 wire aux_b;
// descrever por portas
 nor NOR1 ( aux_a, a, a );
 nor NOR2 ( aux_b, b, b );
 nor NOR3 ( aux_s, aux_a, aux_b );
 nor NOR4 ( s, aux_a, aux_b )
endmodule // f5
// -------------------------
// f5_gate
// m a b s
// 0 0 0 0
// 1 0 1 1 <- a'.b
// 2 1 0 0
// 3 1 1 0
//
// -------------------------
module f5b ( output s,
input a,
input b );
// descrever por expressao
assign s = ~((~(~(a | a) | ~(b | b))) | (~(~(a | a) | ~(b | b))));
endmodule // f5b
module test_f5;
// ------------------------- definir dados
reg x;
reg y;
wire a, b;
f5a moduloA ( a, x, y );
f5b moduloB ( b, x, y );
// ------------------------- parte principal
initial
begin : main
$display("Exemplo_0501 - Cecilia Capurucho Bouchardet - 726020");
$display("Test module");
$display(" x y a b");
// projetar testes do modulo
$monitor("%4b %4b %4b %4b", x, y, a, b);
x = 1'b0; y = 1'b0;
#1 x = 1'b0; y = 1'b1;
#1 x = 1'b1; y = 1'b0;
#1 x = 1'b1; y = 1'b1;
end
endmodule // test_f5