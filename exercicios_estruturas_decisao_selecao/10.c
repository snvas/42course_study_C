/*
Faça um programa que, dado três valores a, b e c, 
verifique se eles podem ser os comprimentos
dos lados de um triângulo. Caso positivo, seu 
programa deve informar também se o triângulo é
equilátero, isósceles ou escaleno. Caso contrário, 
seu programa deve escrever a mensagem “Não
formam um triângulo”.
*/
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int a, b, c;

	printf("Digite 3 valores: ");
	scanf("%d%d%d", &a, &b, &c);

	if(a + b > c && a + c > b && b + c > a)
	{
		printf("Os três lados formam um triângulo\n");
		if (a == b && a == c)
			printf("Equilátero\n");
		else
			if (a == b || a == c || b == c)
				printf("Isóceles\n");
			else
				printf("Escaleno\n");
	}
	else
		printf("Os 3 lados não formam um triângulo!\n");
}