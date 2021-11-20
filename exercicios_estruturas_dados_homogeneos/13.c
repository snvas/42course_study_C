/******************
 * Faça um programa para calcular a 
 * transposta de uma matriz 5 x 4. 
 * Imprima as duas matrizes na
tela.
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void){
	int tamL = 5, tamC = 4;
	int l, c, mat[tamL][tamC], trans[tamC][tamL]; 

	srand(time(NULL));
	for(l = 0; l < tamL; l++){
		for(c = 0; c < tamC; c++){
			mat[l][c] = rand() % 500;
		}
	}

	printf("\n\nMatriz Original: \n");
	for(l = 0; l < tamL; l++){
		for(c = 0; c < tamC; c++){
			printf("%3d ", mat[l][c]);
		}
		printf("\n");
	}

	for (l = 0; l < tamL; l++){
		for(c = 0; c < tamC; c++){
			trans[c][l] = mat[l][c];	
		}
	}

	printf("\n\nMatriz Transposta: \n");
	for(l = 0; l < tamC; l++){
		for(c = 0; c < tamL; c++){
			printf("%3d ", trans[l][c]);
		}
		printf("\n");
	}

	return (0);
}