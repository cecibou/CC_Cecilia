#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <string.h>

class Animal{

private:

public:

    virtual void fala()=0;
     
};

class Homem: public Animal{
public:
void fala();
};

class Cachorro: public Animal{
public:
void fala();
};

class Gato: public Animal{
public:
void fala();
};

#endif // Nota_H_INCLUDED
