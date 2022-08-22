#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Aula 204: Como liberar a memória de uma matriz dinâmica?
*/

int	main(){

	int **mat, i, j;
	mat = malloc(5 * sizeof(int*));

	for(i = 0; i < 5; i++){
		mat[i] = malloc(5 * sizeof(int));
	}
	srand(time(NULL));
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			//mat[i][j] = rand() % 100;
			*(*(mat + i) + j) = rand() % 100;
		}
	}
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("%2d ", *(*(mat + i) + j));
		//	printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++)
		free(mat[i]);
	free(mat);
	return (0);
}