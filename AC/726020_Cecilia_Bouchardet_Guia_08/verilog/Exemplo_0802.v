// -------------------------
// Exemplo_0801 - FULL ADDER
// Nome: Cecilia Capurucho Bouchardet
// Matricula: 726020
// -------------------------
// -------------------------
// full sub
// -------------------------
module fullSub ( output s1,
output s0,
input a1,
input b1,
input BorrowIn );
wire nota1;
wire saida1;
wire saida2;
wire saida3;
wire saida4;
// descrever por portas e/ou 
not NOT(nota1, a1);
xor XOR1(saida1, a1, b1);
xor XOR2(s0, saida1, BorrowIn );
and AND1(saida2, b1, BorrowIn);
and AND2(saida3, nota1, BorrowIn);
and AND3(saida4, nota1, b1);
or OR(s1, saida2, saida3, saida4);

endmodule // fullSub
module test_fullSub;
// ------------------------- definir dados
reg [5:0] x;
reg [5:0] y;
wire [5:0] borrow; 
wire [5:0] diff;
fullSub FB0 ( borrow[0], diff[0], x[0], y[0], 1'b0 );
fullSub FB1 ( borrow[1], diff[1], x[1], y[1], borrow[0] );
fullSub FB2 ( borrow[2], diff[2], x[2], y[2], borrow[1] );
fullSub FB3 ( borrow[3], diff[3], x[3], y[3], borrow[2] );
fullSub FB4 ( borrow[4], diff[4], x[4], y[4], borrow[3] );
fullSub FB5 ( borrow[5], diff[5], x[5], y[5], borrow[4] );

// ------------------------- parte principal
initial begin
    $display("Exemplo0801 - Cecilia Capurucho Bouchardet - 726020");
    $display("Test ALU’s full subtrator");
    // projetar testes do subtrator completo
    $monitor("%6b - %6b = %6b %6b", x, y, diff, borrow);

    #1 x = 6'b010000; y = 6'b010000;
    #1 x = 6'b010001; y = 6'b001101;
    #1 x = 6'b010011; y = 6'b010011;
    #1 x = 6'b000011; y = 6'b010010;
    #1 x = 6'b011000; y = 6'b011011;
            
end
endmodule 