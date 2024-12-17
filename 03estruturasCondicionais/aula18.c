	// exercicio invertendo um numero

#include <stdio.h>

int main(){

  int numero, cifra;

  printf("digite um numero: \n");
  scanf("%d", &numero);

  if(numero >= 0){
    do{
      cifra = numero % 10;
      printf("%d", cifra);
      numero /= 10;
    }while(numero != 0);
  }else if(numero < 1){
     numero = numero * -1;
    do{
      cifra = numero % 10;
      printf("%d", cifra);
      numero /= 10;
    }while(numero != 0);
  }

  return 0;
}