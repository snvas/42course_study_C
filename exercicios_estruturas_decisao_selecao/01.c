/*
Escreva um programa em C que leia três valores 
e apresente qual é o maior e qual é o menor.
*/
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	minor;
	int	major;

	printf("Digite três valores: ");
	scanf("%d%d%d", &a, &b, &c);
	/*if (a > b && a > c)
		printf("O maior valor é: %d", a);
	else if (b > a && b > c)
		printf("O maior valor é: %d", b);
	else 
		printf("O maior valor é: %d", c);
	*/
	if (a < b)
	{
		if (a < c)
			minor = a;
		else
			minor = c;
	}
	else
	{
		if (b < c)
			minor = b;
		else
			minor = c;
	}
	if (a > b)
	{
		if (a > c)
			major = a;
		else
			major = c;
	}
	else
	{
		if (b > c)
			major = b;
		else
			major = c;
	}
	printf("Primeira versão\tMenor: %d\tMaior: %d\n", minor, major);
	//segunda versão
	minor = a;
	major = a;
	if (minor > b)
		minor = b;
	if (minor > c)
		minor = c;
	if (major < b)
		major = b;
	if (major < c)
		major = c;
	printf("Segunda versão\tMenor: %d\tMaior: %d\n", minor, major);
	return (0);
}
