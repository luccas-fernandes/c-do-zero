// como utilizar o operador ternario

#include <stdio.h>

int main() {
    int num1 = 100;
    int num2 = 20;
    int resposta;


    num1 < num2 ? printf("sim\n") : printf("não\n");
  // condicao ? verdadeiro : falso;

    resposta = (num1 < num2) ? 10 : -10;


    printf("%d\n", resposta);

    return 0;
}
