/******************
 * Faça um programa que imprima na tela 
 * apenas os valores abaixo da diagonal 
 * principal de uma matriz 4 x 4.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void){
	int tam = 4;
	int l, c, mat[tam][tam];

	srand(time(NULL));

	for(l = 0; l < tam; l++){
		for(c = 0; c < tam; c++){
			mat[l][c] = rand() % 100;
			printf("%2d ", mat[l][c]);
		}
		printf("\n");
	}

	printf("\nAbaixo da Diagonal Principal:");
	for (l = 0; l < tam; l++){
		for(c = 0; c < tam; c++){
			if (l > c)
				printf("%2d ", mat[l][c]);
			else
				printf("   ");
		}
		printf("\n");
	}
	printf("\n\n");

	return (0);
}