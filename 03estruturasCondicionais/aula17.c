// exercicio 
// vefificar se um num é divisivel por outro


#include <stdio.h>

int main(){
  
  int num1, num2;

  printf("digite dois numeros: \n");
  scanf("%d %d", &num1, &num2);

  if(num2 != 0 && num1 % num2 == 0 ){
    printf("o numero %d é divisivel por %d", num1, num2);
  }else{
    printf("o numero %d não é divisivel por %d", num1, num2);
  }



  return 0;
}