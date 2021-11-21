/******************
 * Confira se uma palavra é palíndroma
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void){
	char palavra[30], copia[30];
	int i, tam, iguais = 0;

	printf("Digite uma palavra: ");
	scanf("%s", palavra);

	tam = strlen(palavra);
	tam--;
	i = 0;
	while (tam >= i){
		if(palavra[i] != palavra[tam])
			iguais++;
		i++;
		tam--;
	}
	if (iguais == 0)
		printf("É palímdroma...\n");
	else
		printf("Não é palímdroma!!\n");
	

/*
	tam = strlen(palavra);
	for(i = 0; i < strlen(palavra); i++){
		copia[i] = palavra[tam - 1];
		tam--;
	}
	copia[i] = '\0';
	tam = strlen(palavra);
	printf("Original: %s\nCópia: %s\n", palavra, copia);
	
	for (i = 0; i < tam; i++){
		if (palavra[i] == copia[i])
			iguais++;
	}
	if (tam == iguais)
		printf("É palímdroma...\n");
	else
		printf("Não é palímdroma!!\n");
*/
	return (0);
}