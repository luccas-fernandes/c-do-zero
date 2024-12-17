// Função e Variável Global

#include <stdio.h>

// declaração de variavel global = gVariavelGlobal = g indica.

int gVariavelGlobal = 2;


void teste(void){
    int variavelLocalAutomatica = 2; //variavel local = visivel apenas para esta função. automatica pelo fato de a cada vez que
    // a função é chamada, ela é recriada.
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2; // variavel estatica com valor unico, logo não é zerada a cada execução.
    variavelLocalEstatica *= 2;
    printf("%i \n", variavelLocalAutomatica);
    printf("%i \n", variavelLocalEstatica);
}



int main(){
    void teste(void);
    printf("Global = %d \n", gVariavelGlobal);
    teste();
    teste();

    return 0;
}