/******************
 *  Inverter a posição dos elementos 
 * de um vetor com recursão.
 * 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void trocar(int v[], int ini, int fim){
	int aux;
	if (ini < fim){
		aux = v[ini];
		v[ini] = v[fim];
		v[fim] = aux;
		trocar(v, ini + 1, fim - 1);
	}
}

void imprimir(int v[], int tam)
{
	if(tam == 1)
		printf("%d ", v[tam -1]);
	else{
		imprimir(v, tam - 1);
		printf("%d ", v[tam -1]);
	}
}

int	main(void)
{
	int vet[10] = {11,258,13,445,58,67,7,8,9,700};

	imprimir(vet, 10);
	trocar(vet, 0, 9);
	printf("\n");
	imprimir(vet, 10);
	return (0);
}
