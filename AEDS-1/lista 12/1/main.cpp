/* 

1. Explique detalhadamente o try,catch, finally.

As exceções são objetos que sinalizam que ocorreu algum problema no tempo de execução de um programa. Assim, ao usuário entrar com algo inadequado, irá querer exibir uma mensagem ao usuário, informando algo.

Sempre que você escrever um bloco de código que está sujeito a algum tipo de erro, é necessário colocar esse código dentro de um bloco try. Isso é equivalente a dizer: “o código que está dentro desse bloco pode gerar exceções”.

O bloco catch, vem logo após o bloco try e acontece o tratamento para a exceção que pode ocorrer no bloco try. NÃO necessariamente a exceção ocorrerá mas, caso ela ocorra, o código tratará a mesma e evitará comportamentos inesperados.

Segue o exemplo abaixo:

try{
    parte do codigo
}

catch(const std::exception& e){
    tratamento do codico
}

Por fim, o bloco finally representa o trecho de código que será executado independente do fato de ter ocorrido a exceção ou não. Mas, isso não existe em C++, é mais comum em Java. 
*/