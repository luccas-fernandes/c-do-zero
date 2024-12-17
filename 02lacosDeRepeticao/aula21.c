// ciclos dentro de ciclos

#include <stdio.h>

int main(){
    for(int i = 1; i <= 10; i++){
        printf("**volta %d**\n", i);
        for(int j=1; j <= 10; j++){
            printf("ponto %d \n", j);
        }
        printf("\n");
    }


    return 0;
}