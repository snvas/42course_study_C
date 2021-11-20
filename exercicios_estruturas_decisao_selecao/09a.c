/*
Um usuário deseja um programa onde possa escolher 
que tipo de média deseja calcular a partir
de três notas. Faça um programa que leia as notas 
e o tipo da média escolhida pelo usuário e calcule
a apresente a média:
Opções:
• ‘a’ - Aritmética.
• ‘p’ - Ponderada (pesos: 3,3,4).
*/
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	float nota1, nota2, nota3;
	char escolha;

	printf("Qual a média deseja?\na - aritimética\np - ponderada\n");
	scanf("%c", &escolha);

	if (escolha == 'a' || escolha == 'p')
	{
		printf("Digite as 3 notas: ");
		scanf("%f%f%f", &nota1, &nota2, &nota3);
	}
	if(escolha == 'a')
		printf("Média aritimética: %.2f\n", (nota1 + nota2 + nota3) / 3);
	else 
		if (escolha == 'p')
			printf("Média ponderada: %.2f\n", (nota1 * 3 + nota2 * 3 + nota3 * 4) / 10);
		else
			printf("\nOpção opção inválida!\n");
}
