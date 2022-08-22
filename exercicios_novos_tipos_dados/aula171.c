/******************
 * Como imprimir um triângulo com espaços à esquerda? N vezes
 * 	|	    *
 * 	|	   **
 * 	|	  ***
 * 	|	 ****
 * 	|	*****
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, i, j;

	printf("Digite o valor de n: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		for(j = n - i; j >= 1; j--)
			printf(" ");
		for (j = 1; j < i; j++)
			printf("*");
		printf("\n");
	}

	return (0);
}