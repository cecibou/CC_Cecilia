// ---------------------------
// -- test clock generator (2)
// -- Cecilia Capurucho Bouchardet
// ---------------------------
module clock ( output clk );
    reg clk;
    initial begin
        clk = 1'b0;
    end
    always begin
        #36 clk = ~clk;
        
    end
endmodule
module pulse ( signal, clock );
    input clock;
    output signal;
    reg signal;
    always @ ( clock ) begin
        signal = 1'b1;
        #3 signal = 1'b0;
        #3 signal = 1'b1;
        #3 signal = 1'b0;
    end
endmodule // pulse
module trigger ( signal, on, clock );
    input on, clock;
    output signal;
    reg signal;
    always @ ( posedge clock & on ) begin
        #60 signal = 1'b1;
        #60 signal = 1'b0;
    end
endmodule // trigger
module Exemplo_0905;
    wire clock;
    clock clk ( clock );
    reg p;
    wire p1,t1;
    pulse pulse1 ( p1, clock );
    trigger trigger1 ( t1, p, clock );
    initial begin
        p = 1'b0;
    end
    initial begin
        $dumpfile ( "Exemplo0905.vcd" );
        $dumpvars ( 1, clock, p1, p, t1 );
        #060 p = 1'b1;
        #120 p = 1'b0;
        #180 p = 1'b1;
        #240 p = 1'b0;
        #300 p = 1'b1;
        #360 p = 1'b0;
        #376 $finish;
    end
endmodule // Exemplo_0902

/*
---------------------------------------------------
PREVISÃO DE TESTES
----------------------------------------------------
METODO CLOCK
Primeiramente vai valer 0 por 12 segundos
Depois valendo 0
----------------------------------------------------
METODO PULSE
Primeiramnete o sinal vale 1
Depois de 9 segundos vale 0
Depois de 9 segundos vale 1
Depois de 9 segundos vale 0
-----------------------------------------------------
EXEMPLO_0905
p começa valendo 0
cria o arquivo " Exemplo0902.vcd"
Depois de 60 segundos vale 1
Depois de 120 segundos vale 0
Depois de 180 segundos vale 1
Depois de 240 segundos vale 0
Depois de 300 segundos vale 1
Depois de 360 segundos vale 0
Depois de 376 segundos termina
------------------------------------------------------
*/
