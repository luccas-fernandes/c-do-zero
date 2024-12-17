// inicializando estruturas

#include <stdio.h>

int main(){

    struct horario {
        int horas;
        int minutos;
        int segundos;
    }agora = {10, 20, 30}; // declarando

    int x;
    x = 10;


    // agora.horas = 10;
    // agora.minutos = 20;
    // agora.segundos = 30;




    printf("%d:%d:%d \n", agora.horas,
                          agora.minutos,
                          agora.segundos);



    return 0;
}