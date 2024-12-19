// Função e Variável Local Automática

#include <stdio.h>

void teste(void){
    int variavelLocalAutomatica = 2; //variavel local = visivel apenas para esta função. automatica pelo fato de a cada vez que
    // a função é chamada, ela é recriada.
    variavelLocalAutomatica *= 2;
    
    printf("%i\n", variavelLocalAutomatica);
}



int main(){
    void teste(void);

    teste();
    teste();

    return 0;
}