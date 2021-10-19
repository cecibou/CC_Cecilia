using System;

class MainClass{
public static void main(string[] args){
  int maioraltura= 0;
  int menoraltura= 0;
  int mediamulheres = 0;
  int mediahomens = 0;
  int mediaalturatotal = 0;
  int altura= 0, sexo= 0;

  for(int i=0; i<4; i++){
      Console.Write("Digite a altura" );
      altura= int.Parse( Console.ReadLine());

      Console.Write("Digite a sexo( H (1), M (2)" );
      sexo = int.Parse(Console.ReadLine()); //cin>>sexo;

      if(i == 0){ //se for a primeira pessoa
          menoraltura = altura;
          maioraltura = altura;
      }else{ //se for depois da primera pessoa
          if(altura < menoraltura)
              menoraltura = altura;
          if(altura > maioraltura)
              maioraltura = altura;
      }

      
      if(sexo == 1){
          if(mediahomens != 0)
              mediahomens = (mediahomens+altura)/2;
          else
              mediahomens = altura;
      }else{
          if(mediamulheres != 0)
              mediamulheres = (mediamulheres+altura)/2;
          else
              mediamulheres = altura;
      }
      if(mediaalturatotal != 0)
          mediaalturatotal = (mediaalturatotal+altura)/2;
      else
          mediaalturatotal = altura;
      
      
}

Console.WriteLine("\nmenor altura eh : "+menoraltura);
Console.WriteLine("\nmaior altura eh : "+maioraltura);
Console.WriteLine("\nmedia altura homens eh : "+mediahomens);
Console.WriteLine("\nmedia altura mulheres eh : "+mediamulheres);
Console.WriteLine("\nmedia altura total eh : "+mediaalturatotal);
}
}