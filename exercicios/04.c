/*
Uma empresa contrata um encanador a R$ 45,00 por dia. 
Faça um programa que solicite o
número de dias trabalhados pelo encanador e 
imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.
*/
#include<stdio.h>

int	main(void)
{
	float	days;
	float	finalValue;
	float	discount;

	printf("Quantos dias trabalhados? ");
	scanf("%f", &days);
	finalValue = days * 45;
	discount = finalValue * 8 / 100;
	finalValue = finalValue - discount;
	printf("A receber: R$%.2f\nDesconto R$%.2f\n", finalValue, discount);
	return (0);
}
