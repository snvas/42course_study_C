/******************
 *  como preencher uma STRUCT 
 * com dados lidos do teclado.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int idade;
	char sexo;
	char nome[100];
}Pessoa;

int main(){
	Pessoa pessoa;
	
	printf("Digite seu nome: ");
	fgets(pessoa.nome, 100, stdin);
	
	printf("Digite seu sexo (F ou M): ");
	scanf("%c", &pessoa.sexo);

	printf("Digite sua idade: ");
	scanf("%d", &pessoa.idade);
	
	printf("Nome: %s\nIdade: %d\nSexo: %c\n\n", pessoa.nome, pessoa.idade, pessoa.sexo);
	
	return (0);
}