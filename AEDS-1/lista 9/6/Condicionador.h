#ifndef CONDICIONADOR_H_INCLUDED
#define CONDICIONADOR_H_INCLUDED

class Condicionador{

private:

    int potencia;
    float temperatura;

public:

    Condicionador( int potencia, float temperatura);

    Condicionador();

     float tempResultante();

     void setTemperatura(float temperatura);

     void setPotencia(int potencia);

     int getPotencia();
     
     float getTemperatura();
     

};

#endif // CONDICIONADOR_H_INCLUDED