#include <stdio.h>
#include <stdlib.h>

/*Aula 198: Alocação dinâmica de memória com a função calloc
			-> A função calloc aloca uma região de memória com o tamanho especificado,
			   e inicializa todos os bytes com o valor zero.
*/

int	main(){
	char *p;
	//p = malloc(sizeof(int));
	p = calloc(1, sizeof(char));
	if (p){

		printf("Memória alocada com sucesso\n");
		printf("p: %c\n", *p);
		*p = 'H';
		printf("p: %c\n", *p);
	}
	else
		printf("Erro ao alocar memória\n");
	return (0);
}
