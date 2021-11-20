/******************
 * Faça um programa que peça ao usuário 
 * dois números inteiros e apresente o 
 * resultado na multiplicação entre os 
 * dois números sem utilizar a operação 
 * de multiplicação.
 */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i, a, b, r = 0;

	printf("Digite dois valores: ");
	scanf("%d%d", &a, &b);

	for (i = 1; i <= a; i++)
		r += b;
	
	printf("%d * %d = %d\n", a, b, r);
	return (0);
}
