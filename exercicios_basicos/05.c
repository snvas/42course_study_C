/*
Crie um programa em C que permita fazer a 
conversão cambial entre Reais e Dólares. 
Considere como taxa de câmbio US$1,0 = R$5,30. 
Leia um valor em Reais e mostre o correspondente em
Dólares.
*/
#include <stdio.h>

int	main(void)
{
	float	valueRealCurrency;
	float	valueDolar;
	float	cotation;

	printf("Informe em Reais a ser convertido: R$ ");
	scanf("%f", &valueRealCurrency);
	cotation = 5.3;
	valueDolar = valueRealCurrency / cotation;
	printf("Valor em Dólares: US$ %.2f\n", valueDolar);
}
