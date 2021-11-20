/******************
 * Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule
e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10].
Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem “novo
calculo? (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2), indicando se ele
deseja ou não executar o programa novamente. Se for informado o código 1, deve ser repetida a
execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o
programa deve ser encerrado.
 * 
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	float n1, n2, media;
	int opcao;

	do{
		do{
			printf("Digite a primeira nota: ");
			scanf("%f", &n1);
		}while (n1 < 0 || n1 > 10);

		do{
			printf("Digite a segunda nota: ");
			scanf("%f", &n2);
		}while (n2 < 0 || n2 > 10);

			media = (n1 + n2) / 2;
			printf("Média: %.2f\n\n", media);

			printf("Novo cálculo? (1-Sim 2-Não)");
			scanf("%d", &opcao);
	}while (opcao != 2);

	return (0);
}
