#include <stdio.h>
#include <stdlib.h>

int main(){
	
int *p, i;

p = (int *) malloc(10*sizeof(int)); //Ao chamar função Malloc, será alocado no ponteiro p um espaço equivalente a 10x o tamanho do tipo int (quantidade de bytes usada pelo tipo).
if(p == NULL){
	printf("Espaço insuficiente");
	exit(1);
}else{
	
	
printf("Primeiros 10 numeros.\n");
for(i=0; i<10; i++){
	p[i] = i+10;
	printf(" %d-%d\n",i,p[i]);
}

p = (int *) realloc(p, 20*sizeof(int)); // Ao chamar a função Realloc, o espaço será realocado no ponteiro p, seguindo a mesma lógica da função Malloc.
printf("Realocado para mais 10 números. \n");
for(i=10; i<20; i++){
	p[i] = i+20;
	printf(" %d-%d\n",i,p[i]);
}

printf("Todos os 20 números alocados. \n");
for(i=0; i<20; i++)
	printf(" %d-%d\n",i,p[i]);
free(p); //Libera espaço que foi alocado pelo ponteiro p
}

system("pause");
return(0);
}
