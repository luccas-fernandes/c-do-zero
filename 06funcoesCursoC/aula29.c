// Como utilizar funções

#include <stdio.h>

float calcularAreaRetang(float base, float altura){
    float area = base * altura;

    return area;
}

int main (){

    float calcularAreaRetang(float x, float y);
    // primeiro termo = o que retorna
    // entre ( ) = o que recebe
    float area = calcularAreaRetang(10.0, 20.0);

    printf("A area eh: %.2f", area);

    return 0;
}