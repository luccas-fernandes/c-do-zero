// manipulando estruturas

#include <stdio.h>

int main(void){
    struct horario
    {
        int horas;
        int minutos;
        int segundos; 
        double teste;
        char letra;
        /* data */
    }; // está definido, mas não declarado

    struct horario agora; // declarado - agora é uma estrutura do tipo horario
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    struct horario depois;
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55/123;
    depois.letra = 'a';

    
    printf("%d \n", depois.horas);
    printf("%d \n", depois.minutos);
    printf("%f \n", depois.teste);
    printf("%c \n", depois.letra);

    return 0;
}
