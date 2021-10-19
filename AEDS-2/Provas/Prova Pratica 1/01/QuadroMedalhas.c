#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//criação das variáveis
typedef struct Pais
{
    char nomeDoPais[30];
    int mOuro, mPrata, mBronze;
} Pais;

//função que compara a quantidade de medalhas de cada pais por ser Ouro, Prata ou Bronze
int ordena(const void *p1, const void *p2)
{
    //Começa a comparação de dois paises
    Pais *i = (Pais *)p1, *j = (Pais *)p2;
    //o primeiro pais tem mais medalha de ouro?
    if (i->mOuro > j->mOuro)
    {
        return -1;
    }
    //o segundo que possui mais medalha de ouro?
    else if (i->mOuro < j->mOuro)
    {
        return 1;
    }
    else
    {
        //o primeiro pais tem mais medalha de prata?
        if (i->mPrata > j->mPrata)
        {
            return -1;
        }
        //o segundo que possui mais medalha de prata?
        else if (i->mPrata < j->mPrata)
        {
            return 1;
        }
        else
        {
            //o primeiro pais tem mais medalha de bronze?
            if (i->mBronze > j->mBronze)
            {
                return -1;
            }
            //o segundo que possui mais medalha de prata?
            else if (i->mBronze < j->mBronze)
            {
                return 1;
            }
            else
            {
                //se algum dos paises estiver com as 3 medalhas igual... ordem alfabética
                return strcmp(i->nomeDoPais, j->nomeDoPais);
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int num, i;
    scanf("%d", &num);
    Pais p[num];
    for (i = 0; i < num; i++)
    {
        scanf(" %s %d %d %d", p[i].nomeDoPais, &p[i].mOuro, &p[i].mPrata, &p[i].mBronze);
    }
    qsort(p, num, sizeof(p[0]), ordena);
    for (i = 0; i < num; i++)
    {
        printf("%s %d %d %d\n", p[i].nomeDoPais, p[i].mOuro, p[i].mPrata, p[i].mBronze);
    }
    return 0;
}