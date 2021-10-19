/*5. Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C.
Em seguida, calcule e mostre a área do triângulo retângulo que tem A por base e C por altura.
Se não for possível formar um triangulo, favor levantar uma exceção.
 a < b + c
 b < a + c
 c < a + b
*/

#include <stdexcept>
#include <stdio.h>
#include <iostream>

using namespace std;   

void condicao(float A, float B, float C){
    if(A < B + C)
    cout<<"A está correto"<<endl;

    if(B < A + C)
    cout<<"B está correto"<<endl;

    if(C < A + B)
    cout<<"C está correto"<<endl;
}

void areaTriangulo(float A, float C){
    float area;
    float B;
    cout<<"Entre com o valor da base"<<endl;
    cin>>A;
    cout<<"Entre com o valor da altura"<<endl;
    cin>>C;
    area=(A*C)/2;
    cout<<area<<endl;
}

int main(){
    float A=0, B=0, C=0;
try{    
    cout<<"Entre com o valor do 3° lado"<<endl;
    cin>>B;
    condicao(A, B, C);
    areaTriangulo(A, C);
}

catch(invalid_argument &e){
    cout<<"Esses lados não se encaixam na condição de existência de um triangulo"<<endl;

}
catch(overflow_error &e){
    cerr << e.what() << '\n';
}

return 0;
}
