// como utilizar o while

#include <stdio.h>

int main() {

  int contador = 1;

  while (contador <= 10) {
    printf("%d \n", contador);
    contador++;
  }

  // importante nao esquecer do incremento do contador, para evitar um ciclo eterno
  

  return 0;
}