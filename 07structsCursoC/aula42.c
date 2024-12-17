// passar e receber estruturas em uma função

#include <stdio.h>

 struct horario
    {
        int horas;
        int minutos;
        int segundos; /* data */
    }; // está de definindo e não declarando


int main(void){

    struct horario teste(struct horario x);
    // esse formato indica que o retorno da função será uma estrutura
    

    struct horario agora; // declarado - agora é uma estrutura do tipo horario
    agora.horas = 10;
    agora.minutos = 42;
    agora.segundos = 58;

    struct horario proxima;
    proxima = teste(agora);
    
    printf("%d:%d:%d \n", proxima.horas,
                          proxima.minutos,
                          proxima.segundos);
    return 0;
}

struct horario teste(struct horario x){
    printf("%d:%d:%d \n", x.horas,
                          x.minutos,
                          x.segundos);

    x.horas = 100;
    x.minutos = 100;
    x.segundos = 100;

    return x;
}