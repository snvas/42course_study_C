#include <stdio.h>
#include <stdlib.h>

//Aula 197: Alocação dinâmica de memória com a função malloc.
// retorna um ponteiro para a região de memória alocada ou NULL.

int	main(){
	int *p;
	p = malloc(sizeof(int));

	if (p){

		printf("Memória alocada com sucesso\n");
		printf("%d\n", *p);
		*p = 50;
		printf("%d\n", *p);
	}
	else
		printf("Erro ao alocar memória\n");
	return (0);
}