/*
Faça um programa para ler do teclado uma 
quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12
*/

#include <stdio.h>

int	main(void)
{
	int	seconds;
	int	hours;
	int	minutes;
	int	rest;

	printf("Digite uma quantidade de segundos: ");
	scanf("%d", &seconds);
	hours = seconds / 3600;
	rest = seconds % 3600;
	minutes = rest / 60;
	seconds = rest % 60;
	printf("%d:%d:%d\n", hours, minutes, seconds);
	return (0);
}
