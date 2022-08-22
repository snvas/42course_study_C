#include <stdio.h>
#include <stdlib.h>

/* Aula 207: Curiosidade entre as funções malloc e calloc */

int	main(){
	int i, *vet1, *vet2;

	vet1 = malloc(10 * sizeof(int));
	vet2 = calloc(10, sizeof(int));

	printf("\nCom malloc: ");
	for(int i = 0; i < 10; i++){
		printf("%d ", vet1[i]);
	}
	printf("\nCom calloc: ");
	for(int i = 0; i < 10; i++){
		printf("%d ", vet2[i]);
	}
	printf("\n");
	return (0);
}