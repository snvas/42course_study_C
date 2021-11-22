/******************
 * Somar os elementos de um vetor com recursão. 
 * Somar os elementos de um vetor com recursão 
 * também é simples, desde que você tenha entendido 
 * corretamente como identificar o 
 * caso base para uma função recursiva.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int soma(int v[], int tam)
{
	if (tam == 0)
		return (0);
	else
		return v[tam -1] + soma(v, tam -1);

}

int	main(void)
{
	int vet[10] = {1,2,3,4,5,6,7,8,9,10};

	printf("Soma: %d\n", soma(vet, 10));
	return (0);
}
