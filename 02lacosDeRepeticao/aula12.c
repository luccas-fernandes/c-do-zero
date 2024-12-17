// exercicio calculcar uma fatorial

#include <stdio.h>

int main(){

  int numero;

  printf("digite um numero: ");
  scanf("%d", &numero);
  
  int fatorial = 1;
  int contador = 1;
  while(contador <= numero){
    fatorial = fatorial * contador;
    contador++;
    
  }

  printf("a fatorial de %d é %d", numero, fatorial);



  return 0;
}

// resposta do professor:

/*

int fatorial = 5;
int resposta = 1;

for(; fatorial >= 1; fatorial-- ){
	resposta *= fatorial;
}

printf("o numero fatorial e %d", resposta);

*/