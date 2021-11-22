/******************
 * Implementar a função potência recursiva 
 * que retorna o valor de x elevado n, dando 
 * continuidade ao estudo de programação 
 * recursiva com a linguagem C. 
 * Os dois valores, x e n serão lidos a partir do teclado.
 * 
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int potencia(int x, int n)
{
	if (n == 0)
		return 1;
	else
		return x * potencia(x, n -1);
}


int	main(void)
{
	int n, x;

	printf("Digite um valor para X e para N: ");
	scanf("%d%d", &x, &n);

	printf("Resultado de %d elevado a %d: %d\n", x, n, potencia(x, n));
	return (0);
}
