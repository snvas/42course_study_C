/*
Escreva um programa que leia um valor de despesa de restaurante, 
o valor da gorjeta (em porcentagem) e o número de pessoas para 
dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.
*/
#include <stdio.h>

int	main(void)
{
	float	cost;
	float	totalCost;
	float	tips;
	float	resulPerson;
	int		numPeople;

	printf("Informe o valor, a gorjeta e o número de pessoas para dividir: ");
	scanf("%f%f%d", &cost, &tips, &numPeople);
	totalCost = cost * tips / 100 + cost;
	resulPerson = totalCost / numPeople;
	printf("Valor por pessoa: R$ %.2f\n", resulPerson);
	return (0);
}
