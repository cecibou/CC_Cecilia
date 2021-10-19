// ---------------------------
// -- test clock generator (3)
// -- Cecilia Capurucho Bouchardet
// ---------------------------
`include "clock.v"
module pulse1 ( signal, clock );
    input clock;
    output signal;
    reg signal;
    always @ ( posedge clock ) begin
        signal = 1'b1;
        #4 signal = 1'b0;
        #4 signal = 1'b1;
        #4 signal = 1'b0;
        #4 signal = 1'b1;
        #4 signal = 1'b0;
    end
endmodule // pulse
module pulse2 ( signal, clock );
    input clock;
    output signal;
    reg signal;
    always @ ( posedge clock ) begin
        signal = 1'b1;
        #5 signal = 1'b0;
    end
endmodule // pulse
module pulse3 ( signal, clock );
    input clock;
    output signal;
    reg signal;
    always @ ( negedge clock ) begin
        signal = 1'b1;
        #15 signal = 1'b0;
        #15 signal = 1'b1;
    end
endmodule // pulse
module pulse4 ( signal, clock );
    input clock;
    output signal;
    reg signal;
    always @ ( negedge clock ) begin
        signal = 1'b1;
        #20 signal = 1'b0;
        #20 signal = 1'b1;
        #20 signal = 1'b0;
    end
endmodule // pulse
module Exemplo_0903;
    wire clock;
    clock clk ( clock );
    wire p1,p2,p3,p4;
    pulse1 pls1 ( p1, clock );
    pulse2 pls2 ( p2, clock );
    pulse3 pls3 ( p3, clock );
    pulse4 pls4 ( p4, clock );
    initial begin
        $dumpfile ( "Exemplo0903.vcd" );
        $dumpvars ( 1, clock, p1, p2, p3, p4 );
        #480 $finish;
    end
endmodule // Exemplo_0903

/*
---------------------------------------------------
PREVISÃO DE TESTES
----------------------------------------------------
METODO PULSE1
Chamando o metodo clock do clock.v
Primeiramente vai valer 1 por 4 segundos
Depois valendo 0 por 4 segundos
Depois valendo 1 por 4 segundos
Depois valendo 0 por 4 segundos
Depois valendo 1 por 4 segundos
Depois valendo 0
----------------------------------------------------
METODO PULSE2
Chamando o metodo clock do clock.v
Primeiramente vai valer 1 por 5 segundos
Depois valendo 0
-----------------------------------------------------
METODO PULSE3
Chamando o metodo clock do clock.v
Primeiramente vai valer 1 por 15 segundos
Primeiramente vai valer 0 por 15 segundos
Depois valendo 1
------------------------------------------------------
METODO PULSE4
Chamando o metodo clock do clock.v
Primeiramente vai valer 1 por 20 segundos
Depois valendo 0 por 20 segundos
Depois valendo 1 por 20 segundos
Depois valendo 0
------------------------------------------------------
EXEMPLO_0903
chama as funçoes pulse1,  pulse2, pulse3, e pulse4
cria o arquivo " Exemplo0903.vcd"
Depois de 480 segundos termina
------------------------------------------------------
*/