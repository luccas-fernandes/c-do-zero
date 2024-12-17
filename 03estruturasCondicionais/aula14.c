// como utilizar if - else 

#include <stdio.h>

int main(){

  int idade;

  printf("informe sua idade: \n");
  scanf("%d", &idade);

  if(idade < 18){
    printf("voce é menor de idade e nao pode beber");
    
  }else{
    printf("voce é maior de idade e pode beber");
  }

  return 0;
}