/******************
 * Dadas duas matrizes A e B 3 x 3, 
 * faça um programa para calcular a soma 
 * das matrizes e salvar em uma matriz C. 
 * Imprima as três matrizes.
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void){
	int tam = 3;
	int l, c, A[tam][tam], B[tam][tam], C[tam][tam];

	srand(time(NULL));

	for(l = 0; l < tam; l++){
		for(c = 0; c < tam; c++){
			A[l][c] = rand() % 100;
			B[l][c] = rand() % 100;
			C[l][c] = A[l][c] + B[l][c];
		}
	}

	printf("\nMatriz A\n");
	for (l = 0; l < tam; l++){
		for(c = 0; c < tam; c++)
			printf("%3d ", A[l][c]);
		printf("\n");
	}

	printf("\nMatriz B\n");
	for (l = 0; l < tam; l++){
		for(c = 0; c < tam; c++)
			printf("%3d ", B[l][c]);
		printf("\n");
	}

	printf("\nMatriz C\n");
	for (l = 0; l < tam; l++){
		for(c = 0; c < tam; c++)
			printf("%3d ", C[l][c]);
		printf("\n");
	}


	return (0);
}