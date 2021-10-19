#include <stdio.h>
#include <math.h>
 
int recebe_numero();
int par(int n);//função par
void exercicio1();//procidure chama exercicio1
void mostrarParesEmOrdemDecrescente(int n);
void exercicio2();
double umSobreImpar(int n);
void exercicio3();
double somaumSobreImpar(int n);
void exercicio4();
double parsobreimpar(int n);
double somaparsobreimpar(int n);
void exercicio5();
float recebe_realx();
float xparsobreimpar(int n, float x);
void exercicio6();
float prodxparsobreimpar(int n, float x);
void exercicio7();
int fatorial( int n);
void exercicio8();
float fatxparsobreimpar(int n, float x);
void exercicio9();
int mult5(int n);
void exercicio10();
float somafatxparsobreimpar(int n, float x);
void exercicio12();
int fib(int n);
void exercicio13();
int maxfib(int n);
void exercicio14();

int main(void) {
 
 exercicio1();
 exercicio2();
 exercicio3();
 exercicio4();
 exercicio5();
 exercicio6();
 exercicio7(); 
 exercicio8();
 exercicio9();
 exercicio10();
 exercicio12();
 exercicio13();
 exercicio14();
 
 return 0;
}
 
int recebe_numero(){
 int n;
 printf("\nEntre com um número:" );
 scanf("%d",&n);
return n;
}
 
int par(int n){
 
 return n*2;
}
 
void exercicio1(){
 int n=2;
 n = recebe_numero();
 printf("%d", par(n)); 
}
 
void mostrarParesEmOrdemDecrescente(int n){
 int i;//variável do loop
 for(i=n-1;i>0; i--){
   if(par(i)<n){
     printf("%d,",par(i));
   }
 }
 
}
 
void exercicio2(){
 int n=2;
 n= recebe_numero();
 mostrarParesEmOrdemDecrescente(n); 
}
 
double umSobreImpar(int n){
 double d,n2;
 n2=n;
 d=1/(n2*2+1);
 
return d;
}
 
 
void exercicio3(){
 int n;
 n= recebe_numero();
 printf("%f",umSobreImpar(n));
}
 
double somaumSobreImpar(int n){
 double n2,total=0;
 int i;
 n2=n;
 for(i=1;i<=n; i++){
   total= total + umSobreImpar(i); 
 }
 return total;
}

void exercicio4(){
 int n;
 n= recebe_numero();
printf("%f",somaumSobreImpar(n));
}
 
double parsobreimpar(int n){
  double n2,total;
  n2=n;
  total= par(n)*umSobreImpar(n);
return total;
}

double somaparsobreimpar(int n){
 double n2,total=0;
 int i;
 n2=n;
 for(i=1;i<=n; i++){
   total= total + parsobreimpar(i); 
 }
 return total;
}

void exercicio5(){
 int n;
 n= recebe_numero();
printf("O %d termo é %f\n",n,parsobreimpar(n));
printf("A soma é: %f\n",somaparsobreimpar(n));
}

float recebe_realx(){
 float x;
 printf("\nEntre com um número equivalente a x:" );
 scanf("%f",&x);
return x;
}

float xparsobreimpar(int n, float x){
  int i, x2;
  float total;
    x2= pow(x,n);
    total= (parsobreimpar(n))*x2;
    return total;
}

void exercicio6(){
 int n;
 float x, f;
 n= recebe_numero();
 x= recebe_realx();
 f=xparsobreimpar(n,x);
 printf("O %d termo é %f\n",n,f);
}

float prodxparsobreimpar(int n, float x){
 float total=1;
 int i;
 for(i=1;i<=n; i++){
   total= total * xparsobreimpar(i,x); 
 }
 return total;
}

void exercicio7(){
 int n;
 float x, f;
 n= recebe_numero();
 x= recebe_realx();

 f=prodxparsobreimpar(n,x);
 printf("%f\n",f);
}

int fatorial(int n){
  int resposta = 1;
  while(n>0){
    resposta= resposta*n;
    n--;
  }
  return resposta;
  
}

void exercicio8(){
  int n;
  n= recebe_numero();
  int resposta = fatorial(n);
  printf("O fatorial é %d", resposta);
}

float fatxparsobreimpar(int n, float x){
  float total, n2;
  n2 = n;
  total = (n*2 * pow(x,n)) / fatorial( n*2+1 );
  return total;
}

void exercicio9(){
 int n;
 float x, f;
 n= recebe_numero();
 x= recebe_realx();
 f=fatxparsobreimpar(n,x);
 printf("%f\n",f);
}

float somafatxparsobreimpar(int n, float x){
 float total=1;
 int i;
 for(i=1;i<=n; i++){
   total= total + fatxparsobreimpar(i,x); 
 }
 return total;
}

void exercicio10(){
  int n;
  float x;
  n= recebe_numero();
  x= recebe_realx();
  printf("%f\n",somafatxparsobreimpar(n,x));
}

int mult5(n){
  int i, resposta;
  for(i=1;i<n;i++){
    printf(" %d\n" , i*5 ) ;
  }
  return resposta;
}

void exercicio12(){
  int n;
  n= recebe_numero();
  mult5(n);
}

int fib( int n){
  int f1, f2, soma, i;
  f1 = 0 ;
  f2 = 1 ;
  i = 1;
  while (i < n){
    i++;
    soma = f1 + f2;
    f1 = f2;
    f2 = soma;
    }
  return soma;
  }

void exercicio13(){
  int n;
  n= recebe_numero();
  printf(" O termo %d de fib é: %d\n" ,n, fib(n));
}

int maxfib(int n) {
  int i=1;
  while (fib(i) < n ){
    i++;
  }
  return fib(i-1);
}

void exercicio14(){
  int n;
  n= recebe_numero();
  printf(" O maior termo de fib é: %d\n" ,maxfib(n));
}
