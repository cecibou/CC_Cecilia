/* Cecília Capurucho B ouchardet-->Lista 1 da Disciplina de Algoritmos e
Estruturas de Dados-- > Professor: Felipe Cunha--> Curso: Ciências da
Computação, 1 período, Turno: Manhã*/
#include <s tdio.h>
#include<m ath.h>
void ex1(){
int c,d,u,n1,n2;
printf(" Me de um número com 3 d igitos\ n" ) ;
scanf(" %d", &n1);
u=n1 % 1 0;
d=((n1 % 1 00) - u) / 1 0;
c= n1 / 1 00;
n2 = u*1 00 + d * 1 0 + c ;
printf(" O n ovo n uemro é: % d\ n" , n 2);
}
void ex2(){
float sal, custo, vtotal, vtotal10;
int kw;
printf(" entre o salario mínimo\ n" ) ;
scanf( "%g" , &sal);
printf(" entre quantidade d e k ilowatts c onsumido\ n" ) ;
scanf(" %d", &kw);
custo = sal / 7 00;
vtotal= kw * custo;
vtotal10= vtotal * 0 .9;
printf(" Cada kilowatt custa: %g \ n" , custo);
printf(" A c onta de luz s erá d e: %g\ n" , vtotal);
printf(" A c onta de luz c om desconto será d e: %g\ n" , vtotal10);
}
void ex3(){
float l1, l2, p , a , d ;
printf(" digite a base\ n" ) ;
scanf(" %f", &l1);
printf(" digite a altura \n" ) ;
scanf(" %f", &l2);
p= (l1*2 ) + (l2*2 ) ;
a=l1*l2;
d=powf( (l1*l1 + l 2*l2) , 0 .5) ;
printf(" O p erimetro é :%f\ n" , p);
printf(" A a rea é :%f\ n" , a);
printf(" A d iagonal é:%f \n" , d);
}
void ex4(){
float raio, p erimetro, area;
printf(" digite o raio do c irculo\ n" ) ;
scanf(" %f", &raio);
perimetro= 2 * M_PI * raio;
area= M_PI * pow(raio, 2 ) ;
printf(" O perimetro eh: % f\ n" , perimetro);
printf(" A a rea e h: %f\ n" , area);
}
void ex5(){
float l, p , a , d;
printf(" digite o lado do q uadrado\ n" ) ;
scanf(" %f", &l);
p=l*4 ;
a=powf((l),2 ) ;
d=powf(2 , 0 .5) * l;
printf(" O p erimetro é :%f\ n" , p);
printf(" A a rea é :%f\ n" , a);
printf(" A d iagonal é:%f \n" , d);
}
void ex6(){
float a, b, c, y ;
printf( "digite um numero \n " );
scanf(" %f", &a);
printf(" digite outro n umero\ n" ) ;
scanf(" %f", &b);
printf(" digite outro n umero\ n" ) ;
scanf(" %f", &c);
y= a+b/(c+a) + 2 * (a-b) + log2(6 4) ;
printf(" seu número e hh:%f\ n" , y);
}
void ex7(){
float a,b,c;
printf(" entre cateto b\ n" ) ;
scanf(" %f", &b);
printf(" entre cateto c\ n" ) ;
scanf(" %f", &c);
a= powf( ( b*b + c*c) , 0 .5) ;
printf(" A h ipotenusa é i gual a %g\ n" , a);
}
void ex8(){
float r, a 1, a10;
printf(" entre o primeiro t ermo:") ;
scanf(" %f", &a1);
printf(" entre a razão:" );
scanf(" %f", &r);
a10=a1+ (1 0- 1 ) *r;
printf(" O v alor do décimo termo é: % f \ n" , a10);
}
void ex9(){
float r, a 1, a5;
printf(" entre o primeiro t ermo:") ;
scanf(" %f", &a1);
printf(" entre a razão:" );
scanf(" %f", &r);
a5=a1* powf(r, (5 - 1 ) );
printf(" O v alor do décimo termo é: % f \ n" , a5);
}
void ex10(){
float a, b;
printf( "um numero a \n " );
scanf(" %f", &a);
printf( "um numero b \n " );
scanf(" %f", &b);
a= a+b;
b= a-b;
a=a-b;
printf(" novo v alor d e a:%f\ n" , a);
printf(" novo v alor d e b:%f\ n" , b);
}
void ex11(){
int num, d en;
float n2,d2,dec;
printf(" entre com o n umerador\ n" ) ;
scanf( "%d" , &num);
printf(" entre denominador\ n" ) ;
scanf( "%d" , &den);
d2 = den;
n2 = num;
dec= n2 / d2;
printf(" A f ração em d ecimal é :%g\ n" , d ec);
}
void ex12(){
int hora, min, total;
printf(" entre a hora\ n" ) ;
scanf(" %d", &hora);
printf(" entre os minutos\ n" ) ;
scanf(" %d", &min);
total= hora*6 0 + min;
printf(" Horas passada do d ia é:%d\ n" , total);
}
void ex13(){
float sal, min, total;
printf(" entre o salario mínimo\ n" ) ;
scanf( "%g" , &min);
printf(" entre o sálario da pessoa\ n" ) ;
scanf(" %g", &sal);
total=sal/min;
printf(" A p essoa ganha % g saláros mínimos\ n" , total);
}
int main(void){
int q;
q = 1 ;
while (q > 0 ) {
printf(" Qual q uestão v ocê d eseja(1..13, 0 s ai)?") ;
scanf(" %d", &q);
switch ( q)
{
case 1 :
ex1();
break;
case 2 :
ex2();
break;
case 3 :
ex3();
break;
case 4 :
ex4();
break;
case 5 :
ex5();
break;
case 6 :
ex6();
break;
case 7 :
ex7();
break;
case 8 :
ex8();
break;
case 9 :
ex9();
break;
case 1 0:
ex10();
break;
case 1 1:
ex11();
break;
case 1 2:
ex12();
break;
case 1 3:
ex13();
break;
default:
if ( (q < 0) | | (q > 1 3) ) {
printf( "número de 1 a 1 3!!\ n" ) ;
}
}
}
printf(" Até a próxima!\ n" ) ;
return 0 ;
}