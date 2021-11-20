/*
Escreva um programa em C que leia um número 
e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int value;

	printf("Digite o valor: ");
	scanf("%d", &value);
	if (value % 2 == 0 || value % 3 == 0 || value % 5 == 0)
		printf("É divisível por 2, 3 ou 5. \n");
	else
		printf("O valor não é divisível por 2, 3 ou 5.\n");
	return (0);
}
