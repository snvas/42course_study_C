#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Aula 200: Alocação dinâmica de memória com a função calloc.
			-> Retorna um ponteiro para uma nova região de memória maior.
			-> Se o ponteiro for nulo ela aloca memória.
			-> Se o novo tamanho for zero a memória é liberada.
			-> Se não houver memória suficiente retorna null.

*/
int main(){
	int i, tam, *vet;

	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	srand(time(NULL));

	vet = malloc(tam * sizeof(int));

	if (vet){
		printf("Memória alocada com sucesso\n");
		for(i = 0; i < tam; i++){
			*(vet + i) = rand() % 100;
		}
		for(i = 0; i < tam; i++){
			printf("%d ", *(vet + i));
		}
		printf("\n");
		printf("Digite o novo tamanho do vetor: ");
		scanf("%d", &tam);

		vet = realloc(vet, tam);
		printf("\nVetor Realocado\n");
		for(i = 0; i < tam; i++){
			printf("%d ", *(vet + i));
		}
		printf("\n");
	}
	else
		printf("Erro ao alocar memória\n");

	return (0);
}