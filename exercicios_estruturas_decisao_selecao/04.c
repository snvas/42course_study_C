/*
Crie um programa que permita ao usuário 
escolher entre fazer a conversão de Real 
para Dólar ou de Dólar para Real. 
Utilize como taxa de câmbio $1 igual a R$5.30.
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	float	value;
	float	valueConverted;
	int		option;
	
	printf("Digite o valor a ser converido: ");
	scanf("%f", &value);
	printf("\n1- Coverter de real para dólar\n2 - Converte de dolar para real\n");
	scanf("%d", &option);

	switch (option){
		case 1:
			valueConverted = value / 5.3;
			printf("Valor convertido: $ %.2f\n", valueConverted);
			break;
		case 2:
			valueConverted = value * 5.3;
			printf("Valor convertido: R$ %.2f\n", valueConverted);
			break;
		default:
			printf("\nOçpção inválida!");
	}
//	printf("Valor convertido: %.2f\n", valueConverted);
	return (0);
	
}
