// funcao scan f - obter dados e valores do usuário
#include <stdio.h>

int main(){
    int base;
    int altura;
    int area;

    printf("Digite o valor da base:  ");
    scanf("%d", &base); // & serve para armazenar na memoria o valor da variavel

    printf("Digite o valor da altura: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("o valor da area do retangulo eh: %d", area);



    return 0;
}