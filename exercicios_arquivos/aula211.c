#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Aula 211 Como escrever linhas de texto com a função fputs?
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

int main(){
	char nome[] = "conto.txt";

	escrever(nome);
	return (0);
}