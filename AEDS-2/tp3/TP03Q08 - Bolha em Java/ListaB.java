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

public class ListaB {
    //iníco a implementação da lista por meio de arranjos
    private SerieV series[];
    private int n;
    public ListaB (int maxTam) { // A constante maxTam define o tamanho maximo permitido na lista
        this.series = new SerieV[maxTam];
        this.n = 0;
    }

 

    //insere no inicio
    void inserirInicio(SerieV x) throws Exception {
        if (n >= series.length)
        throw new Exception("Erro!");
        //levar elementos para o fim do array
        for (int i = n; i > 0; i--){
        series[i] = series[i-1];
        }
        series[0] = x;
        n++;
        }

    void inserirFim(SerieV x) throws Exception {
        if (n >= series.length)
        throw new Exception("Erro!");
        series[n] = x;
        n++;
    }
    
    void inserir(SerieV x, int pos) throws Exception {
        if (n >= series.length || pos < 0 || pos > n)
        throw new Exception("Erro!");
        //levar elementos para o fim do array
        for (int i = n; i > pos; i--){
        series[i] = series[i-1];
        }
        series[pos] = x;
        n++;
        }

    SerieV removerInicio() throws Exception {
        if (n == 0)
        throw new Exception("Erro!");
        SerieV resp = series[0];
        n--;
        for (int i = 0; i < n; i++){
        series[i] = series[i+1];
        }
        return resp;
        }

    SerieV removerFim() throws Exception {
        if (n == 0)
        throw new Exception("Erro!");
        return series[--n];
    }

    SerieV remover(int pos) throws Exception {
        if (n == 0 || pos < 0 || pos >= n)
        throw new Exception("Erro!");
        SerieV resp = series[pos];
        n--;
        for (int i = pos; i < n; i++){
        series[i] = series[i+1];
        }
        return resp;
        }
        
    void mostrar (){
        
        for (int i = 0; i < n; i++){
            MyIO.println(series[i].imprimir());
        }
        
    } 

    void swap(int x, int y){
        SerieV tmp = series[x];
        series[x] = series[y];
        series[y] = tmp;
    }
    
    void selecao(){
        for (int i = 0; i < (n - 1); i++) {
            int menor = i;
            for (int j = (i + 1); j < n; j++){
               if (series[menor].getPais().compareTo(series[j].getPais()) > 0 ){
                  menor = j;
               }else if(series[menor].getPais().equals(series[j].getPais())){
                   if(series[menor].getNome().compareTo(series[j].getNome()) > 0 ){
                       menor = j;
                   }
               }
            }
            swap(menor, i);
         }
         mostrar();
    }

    public void Bolha() {
		for (int i = (n - 1); i > 0; i--) {
			for (int j = 0; j < i; j++) {
				if (series[j].getTemporadas() > series[j + 1].getTemporadas()) {
                    swap(j, j+1);
				}else if(series[j].getTemporadas() == series[j + 1].getTemporadas()){
                    if(series[j].getNome().compareTo(series[j + 1].getNome()) > 0 ){
                        swap(j, j+1);
                    }
                }
			}
		}
        mostrar();
   }

    public static boolean isFim(String s) {
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    public static void main(String[] args) throws Exception {
        MyIO.setCharset("UTF-8");
        String[] entrada = new String[1000];
        int numEntrada = 0;
        ListaB lista = new ListaB(70);
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
                lista.inserirFim(s);
            }
        } while (isFim(entrada[numEntrada++]) == false);
        numEntrada--; // Desconsiderar ultima linha contendo a palavra FIM


        lista.Bolha();
    }
}