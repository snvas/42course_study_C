/******************
 * Como descobrir o maior elemento de um vetor com recursão.
 * Precisamos de uma variável para 
 * armazenar o índice do maior elemento. Contudo, a 
 * repetição é alcançada por meio de chamadas recursivas.
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int maior(int v[], int tam, int indice)
{
	if(tam == 0)
		return v[indice];
	else
	{
		if (v[tam - 1] > v[indice])
			return maior(v, tam - 1, tam - 1);
		else
			return maior(v, tam - 1, indice);
	}
}

int	main(void)
{
	int vet[10] = {11,258,13,445,58,67,7,8,9,700};

	printf("Maior: %d\n", maior(vet, 10, 0));
	return (0);
}
