public class palindromo {

    public static boolean isFim(String s) {
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    public static int ehpalindromo (String s){
            int i, tam, dif = 0;
    //leitura da palavra   
    tam = s.length();
    tam--;// �ltimo �ndice v�lido da string (vetor)
    i = 0; // primeiro �ndice v�lido da string (vetor)
     
        while(tam >= i){
        if(s.charAt(i) != s.charAt(tam)) // conta as letras diferentes
            dif ++;
        i++;
        tam--;
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
            // se o contador de letras diferentes for 0, ent�o a palavra � pal�ndroma
            if (ehpalindromo(entrada[i]) == 0)
                MyIO.println("SIM");

            // e se for diferente de 0, a palavra n�o � palindroma
            else
                MyIO.println("NAO");

            
        }
    }

}
