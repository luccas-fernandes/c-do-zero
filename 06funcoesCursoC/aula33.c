// FORMATAÇÃO DE OUTPUT

#include <stdio.h>

int intVar = 9999999;
int intVar2 = 10;
double doubleVar = 100.123456789;

int main(){
    // formatação variaveis inteiras
    // ao colocar %% o compilador entende que quero de fato por % na tela.
    printf("Variavel inteira (%%d) = %d\n", intVar);
    printf("Variavel inteira (%%i) = %i\n", intVar);
    printf("Variavel inteira (%%x) = %o\n", intVar); //hexadecimal
    printf("Variavel inteira (%%o) = %x\n", intVar); // octal
    printf("\n");

    // formatação variaveis float e double 
    printf("Variavel double (%%f) = %f\n", doubleVar); // para especificar as casas decimais = entre o % e o f = %.2f
    printf("Variavel double (%%e) = %e\n", doubleVar);
    printf("Variavel double (%%g) = %g\n", doubleVar);
    printf("Variavel double (%%a) = %a\n", doubleVar);
    printf("\n");



    return 0;
}