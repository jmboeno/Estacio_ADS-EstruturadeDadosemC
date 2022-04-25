#include <stdio.h>
#include <stdlib.h>

int main(){
	
int *p, i;

p = (int *) malloc(10*sizeof(int)); //Ao chamar fun��o Malloc, ser� alocado no ponteiro p um espa�o equivalente a 10x o tamanho do tipo int (quantidade de bytes usada pelo tipo).
if(p == NULL){
	printf("Espa�o insuficiente");
	exit(1);
}else{
	
	
printf("Primeiros 10 numeros.\n");
for(i=0; i<10; i++){
	p[i] = i+10;
	printf(" %d-%d\n",i,p[i]);
}

p = (int *) realloc(p, 20*sizeof(int)); // Ao chamar a fun��o Realloc, o espa�o ser� realocado no ponteiro p, seguindo a mesma l�gica da fun��o Malloc.
printf("Realocado para mais 10 n�meros. \n");
for(i=10; i<20; i++){
	p[i] = i+20;
	printf(" %d-%d\n",i,p[i]);
}

printf("Todos os 20 n�meros alocados. \n");
for(i=0; i<20; i++)
	printf(" %d-%d\n",i,p[i]);
free(p); //Libera espa�o que foi alocado pelo ponteiro p
}

system("pause");
return(0);
}
