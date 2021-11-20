/******************
 * Faça um programa que imprima na tela 
 * a diagonal secundária de uma matriz 7 x 7.
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void){
	int tam = 7;
	int l, c, mat[tam][tam];

	srand(time(NULL));

	for(l = 0; l < tam; l++){
		for(c = 0; c < tam; c++){
			mat[l][c] = rand() % 100;
			printf("%2d ", mat[l][c]);
		}
		printf("\n");
	}

	printf("\n\nDiagonal Principal: ");
	for(l = 0; l < tam; l++){
			printf("%2d ", mat[l][l]);
		}
		printf("\n");

	printf("\n\nDiagonal Secundária: ");
	for(l = 0; l < tam; l++){
			printf("%2d ", mat[l][tam - 1 -l]);
		}
		printf("\n");
	
	return (0);	
}
