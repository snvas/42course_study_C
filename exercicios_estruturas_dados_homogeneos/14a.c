
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void){
	int i = 0;
	int j, igual, vet[25];

	srand(time(NULL));
	do{
		igual = 0;
		vet[i] = rand() % 50;
		for(j = 0; j < i; j++){
			if(vet[j] == vet[i])
				igual = 1; 
		}
		if(igual == 0)
			i++;
	}while (i < 25);

	for(i = 0; i < 25; i++){
		printf("%d ", vet[i]);
	}
	printf("\n\n");
	return (0);
}