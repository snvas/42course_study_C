/******************
 * não usar fibonacci recursivo, 
 * é muito custoso para o computador, 
 * pois usa muita memória e processamento
 * cria uma árvore de recursão
 * e repete muitos cálculos
 * Totalmente ineficiente!
 */

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	if(n == 1)
		return (0);
	else{
		if (n == 2)
			return 1;
		else
			return fibonacci(n - 1) + fibonacci(n - 2);
	}
}


int	main(void)
{
	int n;

	printf("Digite um valor maior que zero: ");
	scanf("%d", &n);
	printf("O termo %d é %d\n", n, fibonacci(n));

	return (0);
}