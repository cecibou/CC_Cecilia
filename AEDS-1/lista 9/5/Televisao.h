#ifndef TELEVISAO_H_INCLUDED
#define TELEVISAO_H_INCLUDED

class Televisao{
    private:
        int volume;
        int canal;
    public:
        Televisao();
        Televisao(int canal, int volume);

        void aumentarVolume();
        
        void diminuirVolume();
        
        void aumentarCanal();
        
        void diminuirCanal();
       
        void setCanal(int canal);
       
        void setVolume(int volume);

        int getCanal();

        int getVolume();
       
};

#endif // TELEVISAO_H_INCLUDED