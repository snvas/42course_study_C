#include <stdio.h>
#include <stdlib.h>

/*
	Operadores relacionais
		menor que (a < b)		=> 1 Verdadeiro
		maior que (a > b)		=> 0 Falso
		menor ou igual (a <= b) => 1 Verdadeiro
		maior ou igual (a >= b) => 0 Falso
		igual (a == b)			=> 0 Falso
		diferente (a != b)		=> 1 Verdadeiro
*/

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf("\n\tResultado para a: %d, b: %d\n", a, b);
	printf("\n\tResultado menor que (a < b): %d\n", a < b);
	printf("\n\tResultado maior que (a > b): %d\n", a > b);
	printf("\n\tResultado menor ou igual (a <= b): %d\n", a <= b);
	printf("\n\tResultado maior ou igual (a >= b): %d\n", a >= b);
	printf("\n\tResultado igual (a == b): %d\n", a == b);
	printf("\n\tResultado diferente (a != b): %d\n", a != b);
	return (0);
}
