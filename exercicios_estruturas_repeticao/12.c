/******************
 * Para uma turma de 45 alunos, 
 * construa um algoritmo que determine:
a) A idade média dos alunos com menos de 1,70m de altura;
b) A altura média dos alunos com mais de 20 anos.
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i, idade, idadeBaixinhos = 0, quantIdadeBaix = 0, quantAlturaMaior20 = 0;
	float idadeMedia, alturaMedia, altura, alturaMais20 = 0;

	for(i = 1; i <= 4; i++)
	{
		printf("Digite sua idade e sua altura (em metros): ");
		scanf("%d%f", &idade, &altura);

		if (altura < 1.7)
		{
			idadeBaixinhos += idade;
			quantIdadeBaix++;
		}
		if (idade > 20)
		{
			alturaMais20 += altura;
			quantAlturaMaior20++;
		}
	}
	idadeMedia = (float)idadeBaixinhos / quantIdadeBaix;
	alturaMedia = alturaMedia / quantAlturaMaior20;
	printf("Idade média dos alunos com menos de 1.70m de altura: %.2f\n", idadeMedia);
	printf("Altura média dos alunos com mais de 20 anos: %.2f\n", alturaMedia);
	return (0);
}