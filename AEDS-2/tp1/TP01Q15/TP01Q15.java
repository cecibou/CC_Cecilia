/*6. Is em Java - Crie um metodo iterativo que recebe uma string e retorna true se a mesma e
composta somente por vogais. Crie outro metodo iterativo que recebe uma string e retorna
true se a mesma e composta somente por consoantes. Crie um terceiro metodo iterativo que
recebe uma string e retorna true se a mesma corresponde a um numero inteiro. Crie um quarto
metodo iterativo que recebe uma string e retorna true se a mesma corresponde a um numero
real. Na sada padr~ao, para cada linha de entrada, escreva outra de sada da seguinte forma X1
X2 X3 X4 onde cada Xi e um booleano indicando se a e entrada e: composta somente por vogais
(X1); composta somente somente por consoantes (X2); um numero inteiro (X3); um numero real
(X4). Se Xi for verdadeiro, seu valor sera SIM, caso contrario, N~AO.*/

public class TP01Q15 {

    public static boolean isFim(String s){
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
     }

    public static boolean vogal(String s,int i){
        boolean resposta=true;
        if(i < s.length()){
        if(s.charAt(i) != 'A' && s.charAt(i) != 'E' && s.charAt(i) != 'I' && s.charAt(i) != 'O' && s.charAt(i) != 'U' && s.charAt(i) != 'a' && s.charAt(i) != 'e' && s.charAt(i) != 'i' && s.charAt(i) != 'o' && s.charAt(i) != 'u'){
        resposta=false;
        }else{
        i++;
        resposta = vogal(s,i);
        }
        }
        return resposta;
        }
    public static boolean consoante(String s,int i){
        boolean resposta=true;
        if(i < s.length()){
        if(s.charAt(i) == 'A' || s.charAt(i) == 'E' || s.charAt(i) == 'I' || s.charAt(i) == 'O' || s.charAt(i) == 'U' || s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u'|| s.charAt(i) != '1' || s.charAt(i) != '2' || s.charAt(i) != '3' || s.charAt(i) != '4' || s.charAt(i) != '5' || s.charAt(i) != '6' || s.charAt(i) != '7' || s.charAt(i) != '8' || s.charAt(i) != '9'||s.charAt(i) == '.' || s.charAt(i) == ','){
        resposta=false;
        }else{
        i++;
        resposta = consoante(s,i);
        }
        }
        return resposta;
        }

    public static boolean inteiro(String s,int i){
        boolean resposta=true;
        if(i < s.length()){
        if(s.charAt(i) != '0' && s.charAt(i) != '1' && s.charAt(i) != '2' && s.charAt(i) != '3' && s.charAt(i) != '4' && s.charAt(i) != '5' && s.charAt(i) != '6' && s.charAt(i) != '7' && s.charAt(i) != '8' && s.charAt(i) != '9'){
        resposta=false;
            }else if(s.charAt(i) == '.' || s.charAt(i) == ','){
            resposta=false;
            }else{
        i++;
        resposta = inteiro(s,i);
        }
        }
        return resposta;
        }
        
    public static boolean real(String s){
        boolean resposta=true;
        boolean simbolo=false;
        for(int i=0; i<s.length();i++){
            if(s.charAt(i) == '.' || s.charAt(i) == ','){
                if(simbolo==false){
                    simbolo=true;
                }else{                    
                resposta=false;
                i = s.length();
                }
            }
            else if(s.charAt(i) != '0' && s.charAt(i) != '1' && s.charAt(i) != '2' && s.charAt(i) != '3' && s.charAt(i) != '4' && s.charAt(i) != '5' && s.charAt(i) != '6' && s.charAt(i) != '7' && s.charAt(i) != '8' && s.charAt(i) != '9'){
                resposta=false;
                i = s.length();
            } 
        }
        return resposta;
    }

    public static void main (String[] args){
        String entrada = MyIO.readLine();
  
        //Leitura da entrada padrao
        while (!isFim(entrada)){
        if(vogal(entrada,0))
            MyIO.print("SIM ");
        else
            MyIO.print("NAO ");
        if(consoante(entrada,0))
            MyIO.print("SIM ");
        else
            MyIO.print("NAO "); 
            
        if(inteiro(entrada,0))
            MyIO.print("SIM ");
        else
            MyIO.print("NAO "); 
        if(real(entrada))
            MyIO.println("SIM");
        else
            MyIO.println("NAO");   
        
            entrada = MyIO.readLine();
        } 
                     
        //Para cada linha de entrada, gerando uma de saida contendo o numero de letras maiusculas da entrada

         
    }

}
