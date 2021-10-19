#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED

class Relogio{

private:

    int hora;
    int min;
    int seg;

public:

    Relogio( int hora, int min, int seg);

    Relogio();

     void setHora();

     void getHora(int &hora, int &min, int &seg);

     void avancarHora();

};




#endif // ! RELOGIO_H_INCLUDED
