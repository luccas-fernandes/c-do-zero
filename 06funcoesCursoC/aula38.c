#include <stdio.h>

int main(){

    void funcaoPrint(int x, int vetor[]);
    int x = 10;
    int vetor[3] = {10};

    funcaoPrint(x, vetor);

    printf("Variavel int na funcao principal = %d \n", x);
    printf("Vetor na funcao principal = %d \n", vetor[1]);


    return 0;
}

void funcaoPrint(int x, int vetor[]){
    x = x + 10;
    vetor[1] = 20;

    printf("Variavel int na funcao print = %d \n", x);
    printf("Vetor na funcao print = %d \n\n", vetor[1]);
}

// o valor é alterado no escopo da função, e como há um printf dentro 
// tem-se o valor alterado na tela.
// o que nao ocorre na main, tendo em vista q a main nao e capaz de 
// enxergar a variavel no escopo da funcao