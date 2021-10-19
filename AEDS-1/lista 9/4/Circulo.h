#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

class Circulo{
    private:
        float raio;
        int centro[2];
        float calcularArea();
        float calcularDistancia(int x2, int y2);
        float calcularCircuferencia();
    public:
        Circulo();
        Circulo(float raio, int x, int y);

        void setRaio(int r);
        
        void aumentarRaio(float p);
        
        void setCentro(int x, int y);

        float getRaio();

        void getCentro(int &x, int &y);

        float getArea();

        float getDistancia(int x2, int y2);

        float getCircuferencia();
       
};

#endif // CIRCULO_H_INCLUDED