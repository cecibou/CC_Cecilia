/*3. Pesquisa Sequencial em Java: Faca a inserc~ao de alguns objetos no nal de uma Lista e, em
seguida, faca algumas pesquisas sequenciais. A chave primaria de pesquisa sera o atributo nome.
A entrada padr~ao e composta por duas partes onde a primeira e igual a entrada da primeira
quest~ao 1. As demais linhas correspondem a segunda parte. A segunda parte e composta por
varias linhas. Cada uma possui um elemento que deve ser pesquisado na Lista. A ultima
linha tera a palavra FIM. A sada padr~ao sera composta por varias linhas contendo as palavras
SIM/N~AO para indicar se existe cada um dos elementos pesquisados. Alem disso, crie um
arquivo de log na pasta corrente com o nome matrcula sequencial.txt com uma unica linha
contendo sua matrcula, tempo de execuc~ao do seu algoritmo e numero de comparac~oes. Todas
as informac~oes do arquivo de log devem ser separadas por uma tabulac~ao 'nt'.*/

import java.io.*;
import java.io.FileReader;

import javax.naming.ldap.ExtendedRequest;

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
        setDuracao(limpaTag(br.readLine()));
        // MyIO.println(this.duracao);
        while (!br.readLine().contains("s de origem<"))
            ;
        setPais(tratapais(limpaTag(br.readLine())));
        // MyIO.println(this.pais);
        while (!br.readLine().contains(">Idioma"))
            ;
        setIdioma(limpaTag(br.readLine()));
        // MyIO.println(this.idioma);
        while (!br.readLine().contains(">Emissora de televis"))
            ;
        setEmissora(limpaTag(br.readLine()).trim());
        // MyIO.println(this.emissora);
        while (!br.readLine().contains(">Transmiss"))
            ;
        setTransmicao(tratatransmissao(limpaTag(br.readLine())));
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

public class teste {
    public static boolean isFim(String s) {
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }

    public static int count = 0;

    // metodo para fz a minha pesquisa sequencial
    public static boolean pesquisaBinaria(String nome, SerieV serie[], int numEntrada) {
        boolean resp = false;

        int dir = numEntrada, esq = 0, meio;
        while (esq <= dir) {
            meio = (esq + dir) / 2;
            if (serie[meio].getNome().contains(nome)) { //se o nome está dentro do html) {
                count++;
                resp = true;
                esq = numEntrada;
            } else if (serie[meio].getNome().compareTo(nome)<0) {
                count += 2;
                esq = meio + 1;
            } else {
                count += 2;
                dir = meio - 1;
            }
        }
        

        return resp;
    }

    public static void main(String[] args) throws Exception {
        MyIO.setCharset("UTF-8");
        String[] entrada = new String[1000];
        int numEntrada = 0;
        SerieV[] lista = new SerieV[70];
        //String url = "series/";
        String url = "/tmp/series/";
        String pesquisaNome = "";

        // Leitura da entrada padrao
        do {
            entrada[numEntrada] = MyIO.readLine();
            String endereco = url + entrada[numEntrada];
            lista[numEntrada] = new SerieV();
            if (isFim(entrada[numEntrada]) == false) {
                lista[numEntrada].ler(entrada[numEntrada], endereco);
            }
        } while (isFim(entrada[numEntrada++]) == false); // mudar para 2 fins(parte 1 e parte 2)
        numEntrada--; // Desconsiderar ultima linha contendo a palavra FIM

        // Para cada linha de entrada, gerando uma de saida
        pesquisaNome = MyIO.readLine();

        // TEMPO de execucao do algoritmo de ordenacao
        // long start = System.currentTimeMillis();

        while (isFim(pesquisaNome) == false) {
            // foi encontrado o objeto pesquizado
            if (pesquisaBinaria(pesquisaNome, lista, numEntrada) == true) {
                MyIO.println("SIM");
            }

            // não foi encontrado o objeto pesquizado
            else {
                MyIO.println("NÃO");
            }
            pesquisaNome = MyIO.readLine();
        }

        // long tempoTotal = 0;
        // tempoTotal = System.currentTimeMillis() - start;
        // // Mostrar o tempo de execucao e o numero de comparacoes
        // MyIO.println("Tempo para ordenar: " + (tempoTotal)/1000.0 + " s.");
        // MyIO.println("O numero de comparacoes: " + count);

    }

}

