/*2. Faça uma classe Animal com um método abstrato fala. Faça as classes Homem, Cão e Gato,
herdando de animal, redenindo o método fala para retornar Oi, Au au e Miau, respectivamente. Crie um vetor de 10 Animais e instancie Homens, Cães e Gatos nesse vetor. Faça um
loop por todos os animais do vetor, pedindo para eles falarem*/

#include <iostream>
#include "Animal.cpp"
#include "Animal.h"
#include <string.h>

using namespace std;

int main (){
    //Animal animais[10];
    Animal** vetorAnimais = new Animal*[10];
    vetorAnimais[0]= new Homem();
    vetorAnimais[1]= new Gato();
    vetorAnimais[2]= new Cachorro();
    vetorAnimais[3]= new Homem();
    vetorAnimais[4]= new Gato();
    vetorAnimais[5]= new Homem();
    vetorAnimais[6]= new Cachorro();
    vetorAnimais[7]= new Homem();
    vetorAnimais[8]= new Cachorro();
    vetorAnimais[9]= new Gato();

    for(int i=0; i<10; i++){
        vetorAnimais[i]->fala();
        
    }
    
return 0;    
}