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
	int value, positive, negative;

	printf("Digite o primeiro valor: ");
	scanf("%d", &value);
	negative = 0;
	positive = 0;
	if (value < 0)
		negative++;
	else
		positive++;
	printf("Digite o segundo valor: ");
	scanf("%d", &value);
	if (value < 0)
		negative++;
	else
		positive++;
	printf("Digite o terceiro valor: ");
	scanf("%d", &value);
	if (value < 0)
		negative++;
	else
		positive++;
	printf("Digite o quarto valor: ");
	scanf("%d", &value);
	if (value < 0)
		negative++;
	else
		positive++;
	printf("Digite o quinto valor: ");
	scanf("%d", &value);
	if (value < 0)
		negative++;
	else
		positive++;
	printf("\nPositivos: %d\nNegativos: %d\n", positive, negative);
	return (0);
}
