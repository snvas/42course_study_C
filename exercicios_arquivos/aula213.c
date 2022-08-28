#include <stdio.h>
#include <stdlib.h>

/* Aula 212 Como escrever em um arquivo texto com a função fprintf?
	Modos de aberetura de arquivo:
	w - escrita (cria o arquivo se não existir)
	r - leitura (abre o arquivo para leitura)
	a - anexar (abre o arquivo para anexar)
	r+ - leitura e escrita (abre o arquivo para leitura e escrita)
	w+ - escrita e leitura (cria o arquivo se não existir, apaga o conteúdo se o arquivo já existir)
	a+ - anexar e leitura (abre o arquivo para anexar ao final do arquivo)
*/
void escrever(char f[]){
	FILE *file = fopen(f, "w");
	char nome[100];
	int opcao, idade;
	float altura;

	if(file){
		do{
			printf("\nDigite nome, idade e altura\n> ");
			scanf("%100[^\n]", nome, &idade, &altura);
			fprintf(file, "%s %d %.2f\n", nome, idade, altura);
			printf("\nDigite 1 para inserir outro registro. ");
			scanf("%d", &opcao);
			scanf("%c");
		}while (opcao == 1);
		fclose(file);
	}else
		printf("Erro ao abrir o arquivo\n");
}
/*
void ler(char f[]){
	FILE *file = fopen(f,"r");
	char texto[500];

	if(file){
		printf("\n\tTexto lido do arquivo\n");
		while(!feof(file)){
			if(fgets(texto, 500, file)){
				printf("\n--> %s", texto);
			}
		}
		fclose(file);
	}else
		printf("Erro ao abrir o arquivo\n");
}
*/

int main(){
	char nome[] = "conto.txt";

	escrever(nome);
	//ler(nome);
	return (0);
}