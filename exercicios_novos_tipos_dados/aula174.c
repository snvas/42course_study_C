/******************
 * Aula 174: Como criar um vetor de struct?
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
	printf("\t\nNome: %s\n", p.nome);
	printf("\tIdade: %d\n", p.idade);
	printf("\tSexo: %c\n", p.sexo);
	printf("\tData de Nascimento: %d/%d/%d\n\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}
//função que lê os dados de uma pessoa e retorna para quem chamou

Pessoa lerPessoa(){

	Pessoa p;

	printf("\nDigite seu nome: ");
	fgets(p.nome, 100, stdin);

	printf("Digite seu sexo (F ou M): ");
	scanf("%c", &p.sexo);
    scanf("%c");

	printf("Digite sua idade: ");
	scanf("%d", &p.idade);

	printf("Digite sua data de nascimento no formato dd mm aaaa: ");
	scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);
	scanf("%c");
	return p;
}


int main(){
    int i;
	Pessoa pessoas[3];

    for(i = 0; i < 3; i++){
        pessoas[i] = lerPessoa();
    }
    for (i = 0; i < 3; i++){
        impimirPessoa(pessoas[i]);
    }
	return (0);
}
