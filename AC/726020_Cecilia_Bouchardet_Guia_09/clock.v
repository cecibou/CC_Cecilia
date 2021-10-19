// ---------------------------
// -- test clock generator
// -- Cecilia Capurucho Bouchardet
// ---------------------------
module clock ( output clk );
    reg clk;
    initial begin
        clk = 1'b0;
    end
    always begin
        #12 clk = ~clk;
    end
endmodule // clock ( )
module Exemplo_0901;
    wire clk;
    clock CLK1 ( clk );
    initial begin
        $dumpfile ( "clock.vcd" );
        $dumpvars;
        #120 $finish;
    end
endmodule // Exemplo_0901 ( )

/*
----------------------------------------------------------------------
PREVISÃO DE TESTES
----------------------------------------------------------------------
CLOCK
Primeiramente vai valer 1 por 12 segundos
Depois valendo 2
----------------------------------------------------------------------
EXEMPLO_0902
chama o clock
Depois de 120 segundos termina

*/