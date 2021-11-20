/******************
 * Faça um programa que some os números 
 * ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve 
executar no máximo 500 vezes.
*/
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i;
	int soma;

	soma = 0;

	for(i = 1; i <= 1000; i+=2)
	{
		soma += i; //soma = soma + i
		printf("%3d ", i);
	}
	
	printf("\nSoma dos ímpares de 1 a 1000: %d\n\n", soma);
	return (0);
}
