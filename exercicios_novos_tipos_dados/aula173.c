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
//função que lê os dados de uma pessoa e retorna para quem chamou

Pessoa lerPessoa(){

	Pessoa p;
	
	printf("Digite seu nome: ");
	fgets(p.nome, 100, stdin);
	
	printf("Digite seu sexo (F ou M): ");
	scanf("%c", &p.sexo);

	printf("Digite sua idade: ");
	scanf("%d", &p.idade);

	printf("Digite sua data de nascimento no formato dd mm aaaa: ");
	scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
	return p;
}


int main(){
	Pessoa pessoa;
	
	pessoa = lerPessoa();
	impimirPessoa(pessoa);	
	return (0);
}