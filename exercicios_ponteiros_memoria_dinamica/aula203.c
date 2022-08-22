#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Aula 204: Dúvida
	Foram digitadas três linhas, onde cada uma das linhas contém o nome e a nota de um aluno.
	Escreva um programa que leia essas informações e monte uma tabela onde a primeira coluna 
	é o nome e a segunda coluna é a nota.

	compila com a flag -w
*/

int main(){
	char nomes[3][30];
	float notas[3];
	int i;

	for(i=0; i<3; i++){
		printf("Digite o nome e nota do aluno: ");
		scanf("%s%f", &nomes[i], &notas[i]);
	}
	printf("\n\tNome\tNota\n");
	for(i = 0; i < 3; i++){
		printf("\t%s\t%.2f\n", nomes[i], notas[i]);
	}
	return 0;
}