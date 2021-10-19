import java.util.Scanner;

public class Main
{
    public static void main(String[] args) {
        
        Scanner ler = new Scanner(System.in);
        int maioraltura=0;
int menoraltura=300;
int médiamulheres = 0;
int médiahomens = 0;
int médiaalturatotal = 0;
  int altura, sexo;
 
for(int i=0; i<4; i++){
    System.out.print("Digite a altura: ");
    altura = ler.nextInt();
    
    System.out.print("Digite o sexo( H (1), M (2): ");
    sexo = ler.nextInt();
    
    if(i == 0){//se for a primeira pessoa
        menoraltura = altura;
        maioraltura = altura;
    }else{//se for depois da primera pessoa
        if(altura < menoraltura)
            menoraltura = altura;
        if(altura > maioraltura)
            maioraltura = altura;
    }
 
    
    if(sexo == 1){
        if(médiahomens != 0)
            médiahomens = (médiahomens+altura)/2;
        else
            médiahomens = altura;
    }else{
        if(médiamulheres != 0)
            médiamulheres = (médiamulheres+altura)/2;
        else
            médiamulheres = altura;
    }
    if(médiaalturatotal != 0)
        médiaalturatotal = (médiaalturatotal+altura)/2;
    else
        médiaalturatotal = altura;
    
    
}
    System.out.println("menor altura: "+menoraltura);
    System.out.println("maior altura: "+maioraltura);
    System.out.println("media altura homem: "+médiahomens);
    System.out.println("media altura mulher: "+médiamulheres);
    System.out.println("media altura geral: "+médiaalturatotal);
    }
}