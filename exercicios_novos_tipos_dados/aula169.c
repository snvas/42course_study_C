/******************
 *   é possível ter uma STRUCT dentro 
 * de outra STRUCT, deixando as 
 * informações ainda mais organizadas.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int dia, mes, ano;
}DataNas;

typedef struct{
	DataNas dataNas;
	int idade;
	char sexo;
	char nome[100];
}Pessoa;

int main(){
	Pessoa pessoa;
	DataNas data;

	printf("%lu\n", sizeof(data));
	printf("%lu\n", sizeof(pessoa));
	
	printf("Digite seu nome: ");
	fgets(pessoa.nome, 100, stdin);
	
	printf("Digite seu sexo (F ou M): ");
	scanf("%c", &pessoa.sexo);

	printf("Digite sua idade: ");
	scanf("%d", &pessoa.idade);

	printf("Digite sua data de nascimento no formato dd mm aaaa: ");
	scanf("%d%d%d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);


	printf("Nome: %s\nIdade: %d\nSexo: %c\n\n", pessoa.nome, pessoa.idade, pessoa.sexo);
	printf("Data de Nascimento: %d/%d/%d\n", pessoa.dataNas.dia, pessoa.dataNas.mes, pessoa.dataNas.ano);	
	return (0);
}