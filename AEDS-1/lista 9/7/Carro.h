#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

class Carro{

private:

    float litros;
    float distancia;

public:

    Carro( float litros, float distancia);

    Carro();

     void setLitros(float litros);
     
     float getLitros();

     void setDistancia(float distancia);
     
     float getDistancia();

     void abastecer(float litros);

     void mover(float distancia);
     

};

#endif // CARRO_H_INCLUDED