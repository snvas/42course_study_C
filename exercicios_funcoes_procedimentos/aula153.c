#include <stdio.h>
#include <stdlib.h>

void imprimir(int x)
{
	if(x == 0)
		printf("%d ", x);
	else{
	//	printf("%d ", x); descrescente
		imprimir(x - 1);
		printf("%d ", x); // crescente
	}
}


int	main(void)
{
	int n;

	printf("Digite um valor maior que zero: ");
	scanf("%d", &n);

	imprimir(n);

	return (0);
}