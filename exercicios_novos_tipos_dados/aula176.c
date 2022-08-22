/******************
 * Aula 176: Como construir o tipo eletrônio com typedef struct? *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char tipo[100];
	char marca[50];
	char modelo[25];
	char energia;
	char descricao[500];
	int quantidade;
	int codigo;
}Eletronico;

void impimirEletronico(Eletronico e){
	printf("\tTipo: %s", e.tipo);
	printf("\tMarca: %s", e.marca);
	printf("\tModelo: %s", e.modelo);
	printf("\tEnergia: %c", e.energia);
	printf("\tDescrição: %s", e.descricao);
	printf("\tQuantidade: %d", e.quantidade);
	printf("\tCódigo: %d", e.codigo);
}
//função que lê os dados de um eletrônico e retorna para quem chamou

Eletronico lerEletronico(){

	Eletronico e;

	printf("\nDigite o tipo: ");
	fgets(e.tipo, 100, stdin);

	printf("\nMarca: ");
	fgets(e.marca, 50, stdin);

	printf("\nModelo: ");
	fgets(e.modelo, 25, stdin);

	printf("\nEficiência Energética: ");
	scanf("%c", &e.energia);
//	scanf("%c");
	printf("\nDescrição: ");
	fgets(e.descricao, 500, stdin);

	printf("\nQuantidade: ");
	scanf("%d", &e.quantidade);
//	scanf("%c");
	printf("\nCódigo: ");
	scanf("%d", &e.codigo);
//	scanf("%c");
	return e;
}


int main(){
   Eletronico ele;
	
	ele = lerEletronico();
	impimirEletronico(ele);
	return (0);
}
