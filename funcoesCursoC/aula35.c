// funções recursivas = funções que retornam ela mesma
// ao criar uma função recursiva, o programa cria uma cópia da sua função que deve ser resolvida anteriormente a principal
// de modo que a principal só será resolvida após isso.

#include <stdio.h>

int main(){

    int fatorial(int x);
    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial eh %i", resultado);



    return 0;
}

int fatorial(int x){
    int resultado;

    if(x == 0){
        resultado = 1;
    }else{
        resultado = x * fatorial(x - 1); // neste ponto = o programa faz meio que uma pausa e só volta pra este ponto quando a função for executada novamente. o ciclo se repete até que todos os valores sejam coletados de modo que a função não precise entrar em ação novamente.
    }

    return resultado;
}