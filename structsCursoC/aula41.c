// casting em c


#include <stdio.h>

// uma variavel inteira / por outra variavel inteira = sempre resultara um inteiro
// para evitar isso, é necessario o casting (tipo)
int main(void){
    
    int x = 16;
    int y = 3;
    float resultado = (float)x / y;

    printf("%f \n", resultado);

    return 0;
}
