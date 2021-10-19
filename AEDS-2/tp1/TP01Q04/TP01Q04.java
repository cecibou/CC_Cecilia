import java.util.Random;
public class TP01Q04 {

     public static boolean isFim(String s){
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
     }
     
     public static String troca(String s, char letra1, char letra2){
        String b="";
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)==letra1){
                b+=letra2;
            }else{
                b+=s.charAt(i);
            }

        }
        return b;
     }   
    public static void main (String[] args){
      String[] entrada = new String[1000];
      int numEntrada = 0;

      Random gerador = new Random();
      gerador.setSeed(4);

      //Leitura da entrada padrao
      do {
         entrada[numEntrada] = MyIO.readLine();
      } while (isFim(entrada[numEntrada++]) == false);
      numEntrada--;   //Desconsiderar ultima linha contendo a palavra FIM

      //Para cada linha de entrada, gerando uma de saida contendo o numero de letras maiusculas da entrada
      for(int i = 0; i < numEntrada; i++){
        char letra1= (char)('a'+(Math.abs(gerador.nextInt())%26));
        char letra2= (char)('a'+(Math.abs(gerador.nextInt())%26));
        MyIO.println(troca(entrada[i], letra1, letra2));
      }
   
}
}
