#include <stdio.h>
#include <stdlib.h>

/* Aula 208: Como escrever em aquivo texto com a função fputc?
	Modos de aberetura de arquivo:
	w - escrita (cria o arquivo se não existir)
	r - leitura (abre o arquivo para leitura)
	a - anexar (abre o arquivo para anexar)
	r+ - leitura e escrita (abre o arquivo para leitura e escrita)
	w+ - escrita e leitura (cria o arquivo se não existir, apaga o conteúdo se o arquivo já existir)
	a+ - anexar e leitura (abre o arquivo para anexar ao final do arquivo)
*/

int main(){
	FILE *file;
	char letra;

	file = fopen("conto.txt", "w");
	if(file){
		printf("\nDigite um texto e pressione ENTER ao finaliza!\n> ");
		scanf("%c", &letra);
		while(letra != '\n'){
			fputc(letra, file);
			scanf("%c", &letra);
		}
		fclose(file);
	}else{
		printf("Erro ao abrir o arquivo\n");
	}
	return (0);
}