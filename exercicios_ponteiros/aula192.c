/*Escreva um procedimento que receba um vetor inteiro, 
seu tamanho e os endereços de duas
variáveis inteiras, menor e maior, salve nestas variáveis 
o menor e o maior valor do vetor.*/

#include <stdio.h>
#include <stdlib.h>

void maiorMenor(int *vet, int tam, int *menor, int *maior){
	int i;
	*menor = *vet;
	*maior = *vet;
	for(i=0; i < tam; i++){
		if(*menor > *(vet + i))
			*menor = *(vet + i);
		if(*maior < *(vet + i))
			*maior = *(vet + i);
	}
}

int	main(void){
	int vet[10] = {1, 2, 3, 4, 5, 65, 85, 14, 22, 35};
	int menor, maior;
	printf("Menor: %d\tMaior: %d\n", menor, maior);
	maiorMenor(vet, 10, &menor, &maior);
	printf("Menor: %d\tMaior: %d\n", menor, maior);

	return 0;
}