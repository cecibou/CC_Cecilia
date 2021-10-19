import java.io.*;
import java.net.*;
public class TP01Q08 {
    public static boolean isFim(String s) {
        return (s.length() == 3 && s.charAt(0) == 'F' && s.charAt(1) == 'I' && s.charAt(2) == 'M');
    }
    
    public static boolean consoante(char s){
        boolean resposta=true;
            if(s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U' || s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'|| s != '1' || s != '2' || s != '3' || s != '4' || s != '5' || s != '6' || s != '7' || s != '8' || s != '9'|| s == '.' || s == ',' || s == ';'){
                resposta=false;
            }
        
        return resposta;
    }

    public static String getHtml(String endereco){
        URL url;
        InputStream is = null;
        BufferedReader br;
        String resp = "", line;

        try {
            url = new URL(endereco);
            is = url.openStream();  // throws an IOException
            br = new BufferedReader(new InputStreamReader(is));

            while ((line = br.readLine()) != null) {
            resp += line + "\n";
            }
        } catch (MalformedURLException mue) {
            mue.printStackTrace();
        } catch (IOException ioe) {
            ioe.printStackTrace();
        } 

        try {
            is.close();
        } catch (IOException ioe) {
            // nothing to see here

        }

        return resp;
    }

    public static void printQuantidadeItens(String html, String nome){
        int x1=0, x2=0, x3=0, x4=0, x5=0, x6=0, x7=0, x8=0, x9=0, x10=0, x11=0, x12=0, x13=0, x14=0, x15=0, x16=0, x17=0, x18=0, x19=0, x20=0, x21=0, x22=0, x23=0, x24=0, x25=0; 
        for(int i= 0; i<html.length(); i++){
            if(html.charAt(i) == 'a' ){
                x1++;
            }
            else if(html.charAt(i) == 'e' ){
                x2++;
            }
            else if(html.charAt(i) == 'i' ){
                x3++;
            }
            else if(html.charAt(i) == 'o' ){
                x4++;
            }
            else if(html.charAt(i) == 'u' ){
                x5++;
            }
            else if(html.charAt(i) == 225 ){
                x6++;
            }
            else if(html.charAt(i) == 233 ){
                x7++;
            }
            else if(html.charAt(i) == 237 ){
                x8++;
            }
            else if(html.charAt(i) == 243 ){
                x9++;
            }
            else if(html.charAt(i) == 250 ){
                x10++;
            }
            else if(html.charAt(i) == 224 ){
                x11++;
            }
            else if(html.charAt(i) == 232 ){
                x12++;
            }
            else if(html.charAt(i) == 236 ){
                x13++;
            }
            else if(html.charAt(i) == 242 ){
                x14++;
            }
            else if(html.charAt(i) == 249 ){
                x15++;
            }
            else if(html.charAt(i) == 227 ){
                x16++;
            }
            else if(html.charAt(i) == 245 ){
                x17++;
            }
            else if(html.charAt(i) == 226 ){
                x18++;
            }
            else if(html.charAt(i) == 234 ){
                x19++;
            }
            else if(html.charAt(i) == 238 ){
                x20++;
            }
            else if(html.charAt(i) == 244 ){
                x21++;
            }
            else if(html.charAt(i) == 251 ){
                x22++;
            }
            
            else if(html.charAt(i) >= 'b' && html.charAt(i) <= 'z' ){
                x23++;
            }
            else if(html.charAt(i) == '<' ){
                if(html.charAt(i+1)=='b'&& html.charAt(i+2)=='r'){
                    x24++;
                }
                else if(html.charAt(i+1)=='t'&& html.charAt(i+2)=='a'&& html.charAt(i+3)=='b'){
                    x25++;
                }
            }     
        }
        MyIO.println("a(" + x1 + ") e(" + x2 + ") i(" + x3 + ") o(" + x4+ ") u(" +
        x5 + ") " + ((char)225) + "(" + x6 + ") " + ((char) 233) + "(" + x7 + ") " + 
        ((char) 237) + "(" + x8 + ") " + ((char) 243) + "(" + x9 + ") " + ((char) 250) + 
        "(" + x10 + ") " + ((char) 224) + "(" + x11 + ") " + ((char) 232) + "(" + x12 + ") " +
        ((char) 236) + "(" + x13 + ") " + ((char) 242) + "(" + x14 + ") " + ((char) 249) + 
        "(" + x15 + ") " + ((char) 227) + "(" + x16 + ") " + ((char) 245) + "(" + x17 + ") " +
        ((char) 226) + "(" + x18 + ") " + ((char) 234) + "(" + x19 + ") " + ((char) 238) + 
        "(" + x20 + ") " + ((char) 244) + "(" + x21 + ") " + ((char) 251) + "(" + x22 + 
        ") consoante(" + x23 + ") <br>(" + x24 + ") <table>(" + x25 + ") " + nome);
    }

       public static void main(String[] args) {
         //MyIO.setCharset("ISO-8859-1");
          String endereco, html, nome;
          nome = MyIO.readLine();
          do{
          endereco = MyIO.readLine();
          //fazer pesquiza no codigo fonte
          html = getHtml(endereco);
          printQuantidadeItens(html, nome);
          nome = MyIO.readLine();
          }while(!isFim(nome));

       }
    }  
