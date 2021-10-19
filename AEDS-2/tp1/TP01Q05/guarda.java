import java.nio.file.ClosedDirectoryStreamException;

/* Exemplos de Strings de entrada:

2 0 0 and(not(A) , not(B))
2 0 1 and(not(A) , not(B))
2 1 0 and(not(A) , not(B))
2 1 1 and(not(A) , not(B))
2 0 0 not(and(A , B))
2 0 1 not(and(A , B))
2 1 0 not(and(A , B))
2 1 1 not(and(A , B))
3 0 0 0 and(or(A , B) , not(and(B , C)))
3 0 0 1 and(or(A , B) , not(and(B , C)))
3 0 1 0 and(or(A , B) , not(and(B , C)))
3 0 1 1 and(or(A , B) , not(and(B , C)))
3 1 0 0 and(or(A , B) , not(and(B , C)))
3 1 0 1 and(or(A , B) , not(and(B , C)))
3 1 1 0 and(or(A , B) , not(and(B , C)))
3 1 1 1 and(or(A , B) , not(and(B , C)))
*/

public class TP01Q05 {

   public static boolean isZero(String s){
      return (s.length() == 1 && s.charAt(0) == '0');
   }

   public static String pedacoString(String s, int ini, int fim){
      String s2 = "";
      int i;
      for (i=ini;i<fim;i++){
         if (i > (s.length() - 1)) 
           break;
         s2 = s2 + s.charAt(i);
      }

      return s2;
   }

   public static int posicaoPrimeiroEspaco(String myExpression) {
      int i = 0;
      for (i=0; i<myExpression.length(); i++){
         if (myExpression.charAt(i) == ' '){
             break; 
         }
      }
      return i;
   }

   public static int tamanhoEntrada(String myExpression) {
      int pos, tam;
      
      pos = posicaoPrimeiroEspaco(myExpression);
      tam = Integer.parseInt(myExpression.substring(0, pos));
      return tam;
   }

   public static String tiraEspaco(String comEspaco) {
      
      String semEspaco = "";
      for (int i=0; i<comEspaco.length(); i++){
         if (comEspaco.charAt(i) != ' '){
            semEspaco = semEspaco + comEspaco.charAt(i); 
         }
      };
      
      return semEspaco;
   }

   public static String variaveisEntrada(String myExpression) {
      int pos, tam;
      String variavel;
      
      pos = posicaoPrimeiroEspaco(myExpression);
      tam = Integer.parseInt(myExpression.substring(0, pos));
      variavel = (myExpression.substring(pos + 1, (pos + 1) + (tam * 2)));
      variavel = tiraEspaco(variavel);
      return variavel;
   }

   public static String expressaoEntrada(String myExpression) {
      int pos, tam;
      String expressao;
      
      pos = posicaoPrimeiroEspaco(myExpression);
      tam = Integer.parseInt(myExpression.substring(0, pos));
      expressao = (myExpression.substring(((pos) + (tam * 2)) + 1, (myExpression.length())));
      expressao = tiraEspaco(expressao);
      return expressao;
   }

public static boolean retornaVariavel (char Variavel, String Variaveis){
 // devolve a posicao da string A-65; B-66 ...
   char Valor; 
   int pos;
   pos = ((int) Variavel) - 65;
   Valor = Variaveis.charAt(pos);
   return (Valor == '1');
}

public static String parteExpression(String Expression, int parte){
  String subexpr1 = "";
  int parentesisCount = 0, parteCount = 1;
  
  //MyIO.println("parte");
  //MyIO.println(Expression);

  for (int i = 0; i < Expression.length(); i++) {
     if (Expression.charAt(i) == '(') {
        parentesisCount++;
        if (subexpr1 != ""){
         subexpr1 = subexpr1 + '('; 
        }
        continue;
     }
     if (Expression.charAt(i) == ')') {
        parentesisCount--;
     }
     if (parentesisCount == 0) {
        break;
     } else {
        if ((Expression.charAt(i) == ',') && (parentesisCount == 1)) {
           if (parteCount == parte) {
              break;
           } else {
              subexpr1 = "";
              parteCount++;
           }
        } else {
           subexpr1 = subexpr1 + Expression.charAt(i);
        }
     }
  }
  //MyIO.println(str);

  return subexpr1;

}

public static boolean CalcularExpressao(String Expression,String Variaveis){

   String subexpAux;//, subexp1, subexp2;
   boolean resultado = false;
   int i = 0;

   //MyIO.println("calc exp");
   //MyIO.println(Expression);

   if (Expression.length() <= 3){
      //MyIO.println(Expression.charAt(0));
      if (Expression.length() == 1)
         resultado = retornaVariavel(Expression.charAt(0), Variaveis);
      else resultado = retornaVariavel(Expression.charAt(1), Variaveis);
   }else{
      if (Expression.charAt(0) == 'n' && Expression.charAt(1) == 'o' && Expression.charAt(2) == 't'){
         subexpAux = Expression.substring(3);
         resultado = !(CalcularExpressao(subexpAux,Variaveis));
      }else{
         if (Expression.charAt(0) == 'a'&&Expression.charAt(1) == 'n'&&Expression.charAt(2) == 'd'){
            resultado = true;
            for (i=1;i<=10;i++){
               subexpAux = parteExpression(Expression.substring(3),i); 
               if (subexpAux == ""){
                  break;
               }else{
                  resultado = resultado && (CalcularExpressao(subexpAux,Variaveis));
               } 
            }
         }else{
            resultado = false;
            for (i=1;i<=10;i++){
               subexpAux = parteExpression(Expression.substring(2),i); 
               if (subexpAux == ""){
                  break;
               }else{
                  resultado = resultado || (CalcularExpressao(subexpAux,Variaveis));
               } 
            }
         }
      }
   }
   
   return resultado;
 
}

   public static void main(String[] args) {

      String Entrada = "";
      String variaveis = "", expressao = "";
      boolean resultado = false;
      int b=0;

/*
      Entrada = "1234567890";
      MyIO.println(Entrada);
      MyIO.println(Entrada.substring(3,3));
      MyIO.println(pedacoString(Entrada,3,3));
      MyIO.println(Entrada.substring(0,1));
      MyIO.println(pedacoString(Entrada,0,1));
      MyIO.println(Entrada.substring(3,Entrada.length()-1));
      MyIO.println(pedacoString(Entrada,3,Entrada.length()-1));
*/
      Entrada = MyIO.readLine(); 
      while(!isZero(Entrada)){
            variaveis = (variaveisEntrada(Entrada));
            expressao = (expressaoEntrada(Entrada));
            resultado = CalcularExpressao(expressao, variaveis);
            if(resultado==true) b= 1;
            else b= 0;
            MyIO.println(b);
            Entrada = MyIO.readLine();
         }



   }
}

