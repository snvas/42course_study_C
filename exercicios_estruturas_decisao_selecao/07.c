/*************************
Faça um programa que peça ao usuário 
um caracter e diga se é uma vogal ou não. 
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char letter;

	printf("Digite um caracter: ");
	scanf("%c", &letter);

	if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E'
			|| letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O'
			|| letter == 'u' || letter == 'U')
		printf("\tVogal...\n");
	else
		printf("\tConsoante\n");
}