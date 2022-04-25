// Programa Ficha do Aluno

// Declaração de Biblioteca
#include <stdio.h> // Funções de I/O nos dispositivos stdin, stout e files.
#include <stdlib.h> // Funções de manipulação de caracteres na tela.

int main(void)
{
	//int matricula;
	//char nome[50];
	//float nota;
	
	//float vnotas[20]; // vetor de 20 posições
	//float mnotas[10][2]; // matriz de 10 linhas e 2 colunas
	
	//Declaração da struct
	// struct <identificador>
	// {
	// <listagem dos tipos e menbros>;
	// };
	
	struct ficha_aluno
	{
		int matricula;
		char nome[50];
		char disciplina[30];
		float nota;
	};
	
	//Declaração da variável aluno do tipo struct ficha_aluno.
	struct ficha_aluno aluno;
	
	
	// Função printf - impressão em tela
	// Função scanf - leitura de dados do teclado
	
	printf("\n Ficha do Aluno \n");
	
	printf("Matricula do aluno: ");
	scanf("%d", &aluno.matricula);
	
	printf("Nome do aluno: ");
	scanf("%s", &aluno.nome);
	
	printf("Disciplina do aluno: ");
	scanf("%s", &aluno.disciplina);
	
	printf("Informe a nota do aluno: ");
	scanf("%f", &aluno.nota);
	
	printf("\n Ficha do Aluno \n");
	
	printf("Matricula: %d\n", aluno.matricula);
	printf("Nome: %s\n", aluno.nome);
	printf("Disciplina: %d\n", aluno.disciplina);
	printf("Nota: %.2f\n", aluno.nota);
	
	system("PAUSE");
	return(0);
}
