#include <stdio.h>
#include <stdlib.h>

/* Aula 210: Organizando nosso código em procedimentos
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
	char letra;

	if(file){
		printf("\nDigite um texto e pressione ENTER ao finaliza!\n> ");
		scanf("%c", &letra);
		while(letra != '\n'){
			fputc(letra, file);
			scanf("%c", &letra);
		}
		fclose(file);
	}else
		printf("Erro ao abrir o arquivo\n");

}

void ler(char f[]){
	FILE *file = fopen(f, "r");
	char letra;

	if (file){
		while(!feof(file)){
			letra = fgetc(file);
			printf("%c", letra);
		}
		fclose(file);
		printf("\n");
	}else
		printf("Erro ao abrir o arquivo\n");

}

int main(){
	char nome[] = "conto.txt";

	escrever(nome);
	ler(nome);
	return (0);
}