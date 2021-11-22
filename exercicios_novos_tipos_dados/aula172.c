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

void impimirPessoa(Pessoa p){
	printf("\tNome: %s\n", p.nome);
	printf("\tIdade: %d\n", p.idade);
	printf("\tSexo: %c\n", p.sexo);
	printf("\tData de Nascimento: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

int main(){
	Pessoa pessoa;
	
	printf("Digite seu nome: ");
	fgets(pessoa.nome, 100, stdin);
	
	printf("Digite seu sexo (F ou M): ");
	scanf("%c", &pessoa.sexo);

	printf("Digite sua idade: ");
	scanf("%d", &pessoa.idade);

	printf("Digite sua data de nascimento no formato dd mm aaaa: ");
	scanf("%d%d%d", &pessoa.dataNas.dia, &pessoa.dataNas.mes, &pessoa.dataNas.ano);

	impimirPessoa(pessoa);	
	return (0);
}