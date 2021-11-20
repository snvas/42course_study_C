/******************
 * Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
código inteiro e faça uma das ações abaixo:
0 – finaliza o programa;
1 – imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).
O programa deve funcionar até que o usuário digite 0 para finalizar.
 * 
 * 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, opcao;
	float vetor[10];

	for(i = 0; i < 10; i++){
		printf("Digite o valor da posição %d: ", i);
		scanf("%f", &vetor[i]);
	}

	do{
		printf("\n0 - Finalizar\n1 - Imprimir vetor\n2 - Imp. vetor invertido\n");
		scanf("%d", &opcao);

		switch(opcao){
			case 0:
				printf("Finalizando...\n");
				break;
			case 1:
				for(i = 0; i < 10; i++)
					printf("%.2f ", vetor[i]);
				printf("\n");
				break;
			case 2:
				for (i = 9; i >= 0; i--)
					printf("%.2f ", vetor[i]);
				printf("\n");
				break;
			default:
				printf("Opção inválida");

		}
	}while (opcao != 0);
	return (0);
}