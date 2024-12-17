// vetores de estruturas

#include <stdio.h>

int main(){

    struct horario{
        int hora;
        int minutos;
        int segundos;
    };

    // struct horario teste[5];

    //maneira 1
    // teste[0].hora = 10;
    // teste[0].minutos = 10;
    // teste[0].segundos = 10;

    // maneira 2
    struct horario teste[5] ={
        {10, 20, 30}, {20, 30, 40}, {30, 40, 50},
        {40, 50, 60}, {50, 60, 70}
    };

    int i;
    for (i = 0; i < 5; i++){
        printf("%d:%d:%d \n", teste[i].hora,
                              teste[i].minutos,
                              teste[i].segundos);
    }

   



    return 0;
}