/******************
 * Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$2000,00.
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int x, i, idade, menorIdade = 999, maiorIdade = 0, quantM = 0;
	char sexo;
	float salario, mediaSalario = 0;

	printf("Digite o número de entrevistados: ");
	scanf("%d", &x);

	for(i = 1; i <= x; i++)
	{
		printf("Digite sua idade, seu sexo e seu salário: ");
		scanf("%d %c%f", &idade, &sexo, &salario);

		mediaSalario += salario;

		if (menorIdade > idade)
			menorIdade = idade;
		if(maiorIdade < idade)
			maiorIdade = idade;

		if (sexo == 'F' && salario <= 2000)
			quantM++;
	}
	printf("Média salarial: R$ %.2f\n", mediaSalario / x);
	printf("Menor idade: %d\nMaior idade: %d\n", menorIdade, maiorIdade);
	printf("Quantidade de mulheres com salário até R$2000,00: %d\n", quantM);
	return (0);
}