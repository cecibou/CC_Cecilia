#ifndef ELEVADOR_H_INCLUDED
#define ELEVADOR_H_INCLUDED

class Elevador{

private:

    int andar;
    int total;
    int capacidade;
    int pessoas;

public:

    Elevador( int andar, int total, int capacidade, int pessoas);

    Elevador();

     void inicializa(int capacidade, int total);

     void sai();

     void sobe();

     void desce();

     void entra();

     int getAndar();
     
     int getTotal();
     
     int getCapacidade();
     
     int getPessoas();

};

#endif // Elevador_H_INCLUDED
