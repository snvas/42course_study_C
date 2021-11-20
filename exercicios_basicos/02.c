/*
Faça um programa em C para trocar o valor 
de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.
*/
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	printf("Digite dois números que você que trocar de posição: ");
	scanf("%d %d", &a, &b);
	printf("Valores lidos: a: %d\tb: %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a: %d, b: %d\n", a, b);
	return (0);
}
