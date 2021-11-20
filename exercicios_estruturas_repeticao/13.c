/******************
 * Faça um programa que peça ao usuário 
 * um número inteiro maior que 2 e diga 
 * se o número informado é primo ou não.
*/

#include <stdio.h>
#include <stdlib.h>

int 	main(void)
{
	int valor, i, divisores = 0, opcao;

	do{
		do{
			printf("Digite um valor maior que 1: ");
			scanf("%d", &valor);
		}while (valor < 2);

		printf("Divisores de %d: ", valor);
		for(i = 2; i <= valor / 2; i++)
		{
			if(valor % i == 0)
			{
				printf("%d ", i);
				divisores++;
			}
		}
		printf("\n");
		if (divisores != 0)
			printf("%d não é primo\n", valor);
		else
			printf("%d é primo\n", valor);
		printf("1 - Digitar outro valor\n2 - Sair\n");
		scanf("%d", &opcao);
	}while(opcao != 2);
}
