#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Aula 212 Como ler linhas de texto com a função fgets?
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
	char texto[500];

	if(file){
		printf("\nDigite uma frase ou 1 caracter para finalizar\n> ");
		scanf("%500[^\n]", texto);
		scanf("%c");
		while(strlen(texto) > 1){
			fputs(texto, file);
			fputc('\n', file);
			scanf("%500[^\n]", texto);
			scanf("%c");
		}
		fclose(file);
	}else
		printf("Erro ao abrir o arquivo\n");
}

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


int main(){
	char nome[] = "conto.txt";

	escrever(nome);
	ler(nome);
	return (0);
}