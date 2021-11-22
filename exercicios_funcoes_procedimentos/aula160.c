/******************
 * calcular o somatório de 1 até n com recursão. 
 * Este é um exercício bem simples quando resolvido 
 * sem recursão, bastando uma repetição de 1 até n 
 * somando esses valores. Vamos então resolver este 
 * somatório de 1 até n com uma função recursiva?
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int soma(int n)
{
	if (n == 0)
		return 0;
	else
		return n + soma(n -1);
}


int	main(void)
{
	int n;

	printf("Digite N: ");
	scanf("%d", &n);

	printf("Soma de 1 até %d: %d\n", n, soma(n));
	return (0);
}
