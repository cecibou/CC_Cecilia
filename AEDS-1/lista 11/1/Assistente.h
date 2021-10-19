#ifndef ASSISTENTE_H
#define ASSISTENTE_H

#include <Funcionario.h>


class Assistente : public Funcionario
{
    public:
        Assistente(string nome, int salario);
        virtual ~Assistente();
        void exibeDados() override;

    protected:

    private:
};

#endif // ASSISTENTE_H
