#include <stdio.h>
#include <stdlib.h>

/* Aula 212 Como ler um arquivo de texto com a função fscanf?
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

void ler(char f[]){
	FILE *file = fopen(f,"r");
	char nome[100];
	int idade;
	float altura;

	if(file){
		printf("\n\tTexto lido do arquivo\n");
		while(fscanf(file, "%s%d%f", nome, &idade, &altura) != -1)
			printf("\n\tNome: %s\n\tIdade: %d\n\tAltura: %.2f\n", nome, idade, altura);
		fclose(file);
	}else
		printf("Erro ao abrir o arquivo\n");
}

int main(){
	char nome[] = "conto.txt";

	escrever(nome);
	ler(nome);
	return (0);
}