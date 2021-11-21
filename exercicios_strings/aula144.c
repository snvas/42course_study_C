/******************
 * Uma frase é dita palíndroma quando possui o mesmo 
 * significado se lida da esquerda para a direita ou 
 * da direita para a esquerda e, a resposta à pergunta 
 * anterior é NÃO. Antes de verificar se uma frase é palíndroma 
 * é necessário fazer uma limpeza na frase, removendo pontuação, 
 * espaços e acentos, afinal u é diferente de ú!

Veja alguns exemplos de frases palíndromas:
luz azul
anotaram a data da maratona
roma me tem amor
a grama é amarga
a mãe te ama
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void){
	char palavra[50], copia[50];
	int i, j = 0, tam, diferentes = 0;

	printf("Digite uma palavra: ");
	scanf("%50[^\n]", palavra);

	//remover => !?,;:.
	for(i = 0; i < strlen(palavra); i++){
		if(palavra[i] != '!' && palavra[i] != '?' && palavra[i] != ' ' && palavra[i] != '.')
			copia[j++] = palavra[i];
	}

	copia[j] = '\0';

	printf("Original: %s\nCopia: %s", palavra, copia);

	tam = strlen(copia);
	tam--;
	for(i = 0; i < strlen(copia); i++)
	{
		if(copia[i] != copia[tam])
			diferentes++;
		tam--;
	}

	if(diferentes == 0)
		printf("\n\nÉ palímdroma...\n");
	else
		printf("\n\nNão é palímdroma!!\n");

	return (0);
}