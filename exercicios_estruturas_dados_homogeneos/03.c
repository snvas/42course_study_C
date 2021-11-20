/******************
 * Escrever um programa que lê um vetor N 
 * de tamanho 20 e o imprime na tela. 
 * Em seguida, troque o 1o elemento com o último, 
 * o 2a com o penúltimo, ... até o 10a com o 11o. 
 * Imprima o vetor N modificado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int index;
	int fim = 19;
	int copia;
	int vet1[20];

	for (index = 0; index < 20; index++)
	{
		printf("Digite %d: ", index);
		scanf("%d", &vet1[index]);
	}

	printf("\nVetor Original: ");
	for (index = 0; index < 20; index++)
		printf("%2d ", vet1[index]);

	
	for (index = 0; index < 10; index++){
		copia = vet1[index];
		vet1[index] = vet1[fim];
		vet1[fim] = copia;
		fim--;
	}

	printf("\nVetor Modificado: ");
	for (index = 0; index < 20; index++)
		printf("%2d \n", vet1[index]);
	return (0);
}