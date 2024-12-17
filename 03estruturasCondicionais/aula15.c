// como utilizar multiplos if else

#include <stdio.h>

int main(){
  int idade;

  printf("informe sua idade: \n");
  scanf("%d", &idade);

  if(idade <= 5){
    printf("voce é bebe");
  }else if(idade > 5 && idade <= 10){
    printf("voce é crianca");
  }else if(idade > 10 && idade < 18){
    printf("voce é adolescente");
  }else if (idade > 18 && idade < 65){
    printf("voce é adulto");
  }else{
    printf("voce é idoso");
  }

  return 0;
}