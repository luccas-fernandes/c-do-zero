// funções que retornam outras funções

#include <stdio.h>

float somaDeDigitos(float num1, float num2){
    float valorAbsoluto(float x);

    if (num1 < 0){
        num1 = valorAbsoluto(num1);
    }
    if(num2 < 0){
        num2 = valorAbsoluto(num2);
    }

    // dois if ao inves de else if, pois cada verificacao deve ser
    // feita de forma única.

    return num1 + num2;
}

float valorAbsoluto(float x){

    return x * -1;

}



int main(){

    float somaDeDigitos(float num1, float num2);
    float a, b, soma;

    printf("Digite 2 numeros: ");
    scanf("%f", &a);
    scanf("%f", &b);

    soma = somaDeDigitos(a, b);

    printf("A soma dos digitos eh = %.2f \n", soma);


   
    return 0;
}

