public class palindromorecursivo {

    public static boolean isFim(String s) {
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    public static int ehpalindromo (String s, int tam, int i){
        int dif = 0;

        if(s.charAt(i) != s.charAt(tam)){
            dif ++;
        }else{
            if(i<=tam){
                i++;
                tam--;
                dif= ehpalindromo(s, tam, i);
            }
            
        }

    return dif;
         
    }

    public static void main(String[] args) {
        String[] entrada = new String[1000];
        int numEntrada = 0;

        // Leitura da entrada padrao
        do {
            entrada[numEntrada] = MyIO.readLine();
        } while (isFim(entrada[numEntrada++]) == false);
        numEntrada--; // Desconsiderar ultima linha contendo a palavra FIM

        // Para cada linha de entrada, gerando uma de saida 
        for (int i = 0; i < numEntrada; i++) {
            // se o contador de letras diferentes for 0, então a palavra é palíndroma
            if (ehpalindromo(entrada[i], entrada[i].length()-1, 0) == 0)
                MyIO.println("SIM");

            // e se for diferente de 0, a palavra não é palindroma
            else
                MyIO.println("NAO");

            
        }
    }

}
