// manipulando vetores

// criacao de um programa que tem as notas do usuario de input
// armazena elas em um vetor, calcula a media e retorna para o usuario

#include <stdio.h>

int main(){

    float notas[5] = {0};
    float total = 0;
    float media = 0;

    printf("insira suas 5 notas:\n");

    for (int i = 0; i < 5; i++){
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 5; i++){
        total += notas[i];
    }

    media = total / 5;

    printf("sua media eh %.2f", media);
    // % . numero d casas decimais desejadas f.

    return 0;
}