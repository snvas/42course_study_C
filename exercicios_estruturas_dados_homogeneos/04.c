/******************
 * Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	float valor[10];
	float valorTotal = 0;
	float valorParcial;
	int qtd[10];
	int maisVendido = 0;

	for(i = 0; i < 10; i++)
	{
		printf("Digite valor unitário e quantidade vendida: ");
		scanf("%f%d", &valor[i], &qtd[i]);
	}

	//letra a
	for (i = 0; i < 10; i++)
	{
		valorParcial = qtd[i] * valor[i];
		printf("Vendido: %d\tValor unitário: R$%.2f\tValor total R$%.2f\n", qtd[i], valor[i], valorParcial);
		valorTotal += valorParcial;
	}
	printf("Total das vendas R$ %.2f\n", valorTotal);
	printf("Comissão paga so vendedor R$ %.2f\n", valorTotal * 0.05);

	//letra b
	for (i = 0; i < 10; i++){
		if (qtd[i] > maisVendido)
			maisVendido = qtd[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (qtd[i] == maisVendido)
		{
			printf("Posição: %d\tValor R$%.2f\n", i, valor[i]);
		}
	}


}