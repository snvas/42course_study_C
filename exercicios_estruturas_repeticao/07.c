/******************
 * Leia um valor inteiro N. 
 * Apresente o quadrado de cada 
 * um dos valores pares, de 1 até N,
inclusive N, se for o caso.
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i, n;

	printf("Digite um valor inteiro: ");
	scanf("%d", &n);

	for(i = 2; i <= n; i+= 2)
		printf("%d ", i * i);
	printf("\n\n");	
}