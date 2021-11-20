/******************
 * Faça um programa que calcule a média de 
 * salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de 
cada funcionário. Ao final, o programa deve 
imprimir a média dos salários informados, 
o salário mais alto e o salário mais baixo.
 */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int numFunc, i;
	float salario, totalSalario = 0, salarioMedio, maiorSalario = 0, menorSalario = 99999;

	do {
		printf("Digite o número de funcionários: ");
		scanf("%d", &numFunc);
	}while (numFunc < 0);

	for (i = 1; i <= numFunc; i++)
	{
		printf("%d salário: ", i);
		scanf("%f", &salario);

		totalSalario += salario;
		if(menorSalario > salario)
			menorSalario = salario;
		if(maiorSalario < salario)
			maiorSalario = salario;
	}
	printf("Salario medio R$ %.2f\n", totalSalario/numFunc);
	printf("Maior salário R$ %.2f\n", maiorSalario);
	printf("Menor salário R$ %.2f\n", menorSalario);
	return (0);
}