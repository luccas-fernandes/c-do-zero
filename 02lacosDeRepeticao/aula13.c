// ciclo do while

#include <stdio.h>

int main() {

  int i = 0;

  while (i != 0) {
    printf("teste\n");
  }

  do {
    printf("teste2 \n");
  } while (i != 0);
  // no do while, executa ao menos uma vez a chamada que for feita.

  return 0;
}