import java.io.*;

class SerieV {
    private String nome;
    private String idioma;
    private String formato;
    private String duracao;
    private String pais;
    private String emissora;
    private String transmicao;
    private int temporadas;
    private int episodios;

    // Construtor vazio
    public SerieV() {
        this.idioma = "";
        this.nome = "";
        this.duracao = "";
        this.formato = "";
        this.pais = "";
        this.emissora = "";
        this.transmicao = "";
        this.temporadas = 0;
        this.episodios = 0;
    }

    // Construtor que recebe parâmetros
    SerieV(String nome, String idioma, String duracao, String formato, String pais, String emissora, String transmicao,
            int temporadas, int episodios) {
        this.nome = nome;
        this.idioma = idioma;
        this.duracao = duracao;
        this.formato = formato;
        this.pais = pais;
        this.emissora = emissora;
        this.transmicao = transmicao;
        this.temporadas = temporadas;
        this.episodios = episodios;
    }

    // encapsulamento das variáveis
    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return this.nome;
    }

    public void setIdioma(String idioma) {
        this.idioma = idioma;
    }

    public String getIdioma() {
        return this.idioma;
    }

    public void setFormato(String formato) {
        this.formato = formato;
    }

    public String getFormato() {
        return this.formato;
    }

    public void setDuracao(String duracao) {
        this.duracao = duracao;
    }

    public String getDuracao() {
        return this.duracao;
    }

    public void setPais(String pais) {
        this.pais = pais;
    }

    public String getPais() {
        return this.pais;
    }

    public void setEmissora(String emissora) {
        this.emissora = emissora;
    }

    public String getEmissora() {
        return this.emissora;
    }

    public void setTransmicao(String transmicao) {
        this.transmicao = transmicao;
    }

    public String getTransmicao() {
        return this.transmicao;
    }

    public void setTemporadas(int temporadas) {
        this.temporadas = temporadas;
    }

    public int getTemporadas() {
        return this.temporadas;
    }

    public void setEpisodios(int episodios) {
        this.episodios = episodios;
    }

    public int getEpisodios() {
        return this.episodios;
    }

    public void clone(SerieV x) {
        this.nome = x.getNome();
        this.idioma = x.getIdioma();
        this.duracao = x.getDuracao();
        this.formato = x.getFormato();
        this.pais = x.getPais();
        this.emissora = x.getEmissora();
        this.transmicao = x.getTransmicao();
        this.temporadas = x.getTemporadas();
        this.episodios = x.getEpisodios();
    }

    public static String limpaTag(String s) {
        String resp = "";
        boolean dentroTag = false;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '<') {
                // resp += s.charAt(i);
                dentroTag = false;
            } else if (s.charAt(i) == '>') {
                // resp += s.charAt(i);
                dentroTag = true;
            } else if (dentroTag == true) {
                resp += s.charAt(i);
            }
        }
        return resp;
    }

    public static int trataInt(String s) {
        int resp = 0;
        String aux = "";
        // MyIO.print(s);
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '0' || s.charAt(i) == '1' || s.charAt(i) == '2' || s.charAt(i) == '3'
                    || s.charAt(i) == '4' || s.charAt(i) == '5' || s.charAt(i) == '6' || s.charAt(i) == '7'
                    || s.charAt(i) == '8' || s.charAt(i) == '9') {
                aux += s.charAt(i);
            }
            if (s.charAt(i) == ' ') {
                break;
            }
        }
        resp = Integer.parseInt(aux);

        return resp;
    }

    public static String tratapais(String s) {
        String resp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '&') {
                i += 6;
            }
            resp += s.charAt(i);
        }

        return resp;
    }

    public static String tratatransmissao(String s) {
        String resp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '&') {
                i += 6;
            }
            resp += s.charAt(i);
        }

        return resp;
    }

    // public static String extraiNome(String s) {
    //     String resp = "";
    //     int i = 0;
    //     while (s.charAt(i) != '.') {
    //         if (s.charAt(i) == '_') {
    //             resp += ' ';
    //         } else {
    //             resp += s.charAt(i);
    //         }
    //         i++;
    //     }
    //     return resp;
    // }

    //método para tratar o nome do arquivo e retornar o nome da série
    public String searchName(String fileName){
        String resp = "";
        for(int i = 0; i < fileName.length(); i++){
            if(fileName.charAt(i)  == '_'){ //caso o caracter na posição i seja igual ao '_' a variável resp recebe um espaço em branco
                resp += ' ';
            } else { //caso não tenha espaço em branco o caracter é concatenado à string resp
                resp += fileName.charAt(i);
            }
        }
        return resp.substring(0, resp.length()-5); //retorno da substring resp retirando os 5 últimos caracteres relacionados à extensão do arquivo
    }

    // funcao que le no meu pub.in
    public void ler(String nome, String endereco) throws Exception {
        InputStreamReader irs = new InputStreamReader(new FileInputStream(endereco));

        BufferedReader br = new BufferedReader(irs);
        while (!br.readLine().contains("<table class=\"infobox_v2\""))
            ;
        br.readLine();

        this.nome = searchName(nome);
        //this.nome = limpaTag(br.readLine());
        // MyIO.println(this.nome);
        // setNome(extraiNome(nome));

        while (!br.readLine().contains(">Formato<"))
            ;
        setFormato(limpaTag(br.readLine()));
        // MyIO.println(this.formato);
        while (!br.readLine().contains(">Dura"))
            ;
        setDuracao(limpaTag(br.readLine()).trim());
        // MyIO.println(this.duracao);
        while (!br.readLine().contains("s de origem<"))
            ;
        setPais(tratapais(limpaTag(br.readLine())).trim());
        // MyIO.println(this.pais);
        while (!br.readLine().contains(">Idioma"))
            ;
        setIdioma(limpaTag(br.readLine()).trim());
        // MyIO.println(this.idioma);
        while (!br.readLine().contains(">Emissora de televis"))
            ;
        setEmissora(limpaTag(br.readLine()).trim());
        // MyIO.println(this.emissora);
        while (!br.readLine().contains(">Transmiss"))
            ;
        setTransmicao(tratatransmissao(limpaTag(br.readLine())).trim());
        // MyIO.println(this.transmicao);
        while (!br.readLine().contains(" de temporadas<"))
            ;
        setTemporadas(trataInt(limpaTag(br.readLine())));

        while (!br.readLine().contains(" de epis"))
            ;
        setEpisodios(trataInt(limpaTag(br.readLine())));
        br.close();
    }

    // funcao que imprimi de acordo com o meu pub.out
    public String imprimir() {
        return this.nome + " " + this.formato + " " + this.duracao + " " + this.pais + " " + this.idioma + " "
                + this.emissora + " " + this.transmicao + " " + this.temporadas + " " + this.episodios;

    }

}

class Fila {
    private SerieV[] array;
    private int primeiro; // Remove do indice "primeiro".
    private int ultimo; // Insere no indice "ultimo".
 
//com 2 índices não precismaos deslocar o array, pois controlados o inicio e fim da fila

    //Construtor da classe.
    public Fila () {
       this(5);
    }
 
 
    
    //Construtor da classe.
    public Fila (int tamanho){
       array = new SerieV[tamanho+1];
       primeiro = ultimo = 0;
    }
 
 
    //Insere um elemento na ultima posicao da fila.
    public void inserir(SerieV x) throws Exception {
        
       //insercao em fila circular
       //se o array estiver cheio vai remover o primeiro
       if (((ultimo + 1) % array.length) == primeiro) {
          remover();
       }
 
       array[ultimo] = x;
       ultimo = (ultimo + 1) % array.length;
    }
 
 
    /**
     * Remove um elemento da primeira posicao da fila e movimenta 
     * os demais elementos para o primeiro da mesma.
     * @return resp int elemento a ser removido.
     * @throws Exception Se a fila estiver vazia.
     */
    public SerieV remover() throws Exception {
 
       //validar remocao
       if (primeiro == ultimo) {
          throw new Exception("Erro ao remover!");
       }
 
       SerieV resp = array[primeiro];
       primeiro = (primeiro + 1) % array.length;
       return resp;
    }

    
    public void calculaMedia(){
        int numTemp = 0, mediaTemp, temp=0;
        int count = 0;
        for(int i = primeiro; i != ultimo; i = ((i + 1) % array.length)) {
             temp = array[i].getTemporadas();
             numTemp += temp;
             count++;
         }
        
        // if(count == 6)
        //     count = 5;
        //this.mostrar();
        mediaTemp = (int)Math.round((double)numTemp/count);
        
        MyIO.println(mediaTemp);
    }

    public void mostrar (){

  
        for(int i = primeiro; i != ultimo; i = ((i + 1) % array.length)) {
           MyIO.println(array[i].imprimir());
        }
  

     }
 
    /**
     * Retorna um boolean indicando se a fila esta vazia
     * @return boolean indicando se a fila esta vazia
     */
    public boolean isVazia() {
       return (primeiro == ultimo); 
    }
 
    public static boolean isFim(String s) {
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }
    public static void main(String[] args) throws Exception {
        MyIO.setCharset("UTF-8");
        String[] entrada = new String[1000];
        int numEntrada = 0;
        Fila filas = new Fila();
        SerieV s;
        //String url = "series/";
        String url = "/tmp/series/";

        // Leitura da entrada padrao
        do {
            entrada[numEntrada] = MyIO.readLine();
            String endereco = url + entrada[numEntrada];
            s = new SerieV();
            if (isFim(entrada[numEntrada]) == false) {
                s.ler(entrada[numEntrada], endereco);
                filas.inserir(s);
                filas.calculaMedia();
            }
        } while (isFim(entrada[numEntrada++]) == false);
        numEntrada--; // Desconsiderar ultima linha contendo a palavra FIM

        //pega quantas operações ira fazer
        int n = MyIO.readInt();
        //faz as operaçoes
        for(int i = 0; i<n; i++){
            String linha = MyIO.readLine();
            String primeiraParte = linha.substring(0,1);
            //MyIO.println(primeiraParte);
            //ver qual eh a funçãoa ser usada
            if(primeiraParte.equals("I")){
                //inserir no inicio
                String segundaParte = linha.substring(2);
                //MyIO.println(segundaParte);
                String endereco = url + segundaParte;
                s = new SerieV();
                s.ler(segundaParte, endereco);
                filas.inserir(s);
                filas.calculaMedia();
            }
            if(primeiraParte.equals("R")){
                //remover no inicio
                s = filas.remover();
            }
        }
        
    }

}