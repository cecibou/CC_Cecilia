/*9. Arquivo em Java: Faca um programa que leia um numero inteiro n indicando o numero de
valores reais que devem ser lidos e salvos sequencialmente em um arquivo texto. Apos a leitura
dos valores, devemos fechar o arquivo. Em seguida, reabri-lo e fazer a leitura de tras para frente
usando os metodos getFilePointer e seek da classe RandomAccessFile e mostre todos os valores
lidos na tela. Nessa quest~ao, voc^e n~ao pode usar, arrays, strings ou qualquer estrutura de dados.
A entrada padr~ao e composta por um numero inteiro n e mais n numeros reais. A sada padr~ao
corresponde a n numeros reais mostrados um por linha de sada*/

import java.io.RandomAccessFile;
import java.io.*;

public class TP01Q09 {

    public static void gravar(int n)throws Exception{
        RandomAccessFile file= new RandomAccessFile("arq09.txt", "rw");
        for(int i=0; i<n; i++){
            float numero = MyIO.readFloat();
            file.writeFloat(numero);
        }
        file.close();
    }

    public static void ler(int n)throws Exception{
        RandomAccessFile file2 = new RandomAccessFile("arq09.txt", "rw");
        
        int posicao = 0;
        float num=0;
        for(posicao = n; posicao > 0; posicao--){
            file2.seek((posicao-1)*4);
            num = file2.readFloat();
            if((num - (int) num) == 0){
                System.out.println((int)num);
            }else{
                System.out.println(num);
            }
        }
        file2.close();
    }
    
    public static void main (String[] args) throws Exception{
        int n = MyIO.readInt();
        
        gravar(n);
        ler(n);    
    }
}
