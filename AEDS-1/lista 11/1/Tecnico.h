#ifndef TECNICO_H
#define TECNICO_H

#include <Assistente.h>


class Tecnico : public Assistente
{
    public:
        Tecnico(string nome,int salario, int bonusSalario);
        virtual ~Tecnico();
        void exibeDados() override;

    protected:

    private:
        int bonusSalario;
};

#endif // TECNICO_H
