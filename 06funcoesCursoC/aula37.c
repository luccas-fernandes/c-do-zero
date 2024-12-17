#include <stdio.h>

int main(){
    void funcaoPrintMatriz(int matriz[][3]);
    int matriz[3][3] = {1,2,3,4,5,6,7,8,9};

   
    funcaoPrintMatriz(matriz);


    return 0;
}

void funcaoPrintMatriz(int matriz[][3]){ 
    // no minimo, deve ser informado a segunda parte.
    int i, j;

    for(i = 0; i < 3; i++){
         for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}