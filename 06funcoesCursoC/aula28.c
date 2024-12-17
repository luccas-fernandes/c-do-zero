// funções

#include <stdio.h>

void imprimeMensagem(void){
	print("teste.");
}


int main(){
int x;
// por motivos de organização, é bom declarar as funções
void imprimeMensagem(void);

imprimeMensagem();

return 0;
}
