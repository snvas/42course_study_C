/*
Escreva um programa em C que lê 
5 números inteiros, um por vez. 
Conte quantos destes valores
são negativos e quantos são positivos. Ao final, 
imprima na tela a quantidade de números negativos
e positivos.
*/
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int one, two, three, four, five, positive, negative;

	printf("Digite o primeiro valor: ");
	scanf("%d", &one);
	printf("Digite o segundo valor: ");
	scanf("%d", &two);
	printf("Digite o terceiro valor: ");
	scanf("%d", &three);
	printf("Digite o quarto valor: ");
	scanf("%d", &four);
	printf("Digite o quinto valor: ");
	scanf("%d", &five);
	negative = 0;
	positive = 0;
	if (one < 0)
		negative++;
	else
		positive++;
	if (two < 0)
		negative++;
	else
		positive++;
	if (three < 0)
		negative++;
	else
		positive++;
	if (four < 0)
		negative++;
	else
		positive++;
	if (five < 0)
		negative++;
	else
		positive++;
	printf("\nPositivos: %d\nNegativos: %d\n", positive, negative);
	return (0);
}