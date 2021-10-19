#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H

#include <Assistente.h>


class Administrativo : public Assistente
{
    public:
        Administrativo(string nome, int salario, int adicionalNoturno, string turno);
        virtual ~Administrativo();
        void exibeDados() override;

    protected:

    private:
        int adicionalNoturno;
        string turno;
};

#endif // ADMINISTRATIVO_H
