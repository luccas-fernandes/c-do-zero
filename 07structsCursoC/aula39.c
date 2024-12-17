// introdução a estruturas

#include <stdio.h>

int main(void){
    struct horario
    {
        int horas;
        int minutos;
        int segundos; /* data */
    }; // está definido, mas não declarado

    struct horario agora; // declarado - agora é uma estrutura do tipo horario
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;
    
    printf("%d:%d:%d \n", agora.horas, agora.minutos, agora.segundos);

    return 0;
}
