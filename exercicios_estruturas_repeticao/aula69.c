/******************
 * Diferença entre for, while e do()while 
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i;

	i = 0;
	do{
		printf("Digite um valor maior que zero: ");
		scanf("%d", &i);
	}while (i <= 0);
	
	printf("\n\n\tValor lido: %d\n\n", i);
	/*
	printf("\nGerado com for: ");
	for (i = 0; i <= 10; i++)
		printf("%d", i);
	i = 0;
	printf("\n\nGerado com while: ");
	while (i <= 10)
		printf("%d \n", i++);
	*/
}