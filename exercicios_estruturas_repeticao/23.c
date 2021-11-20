/******************
 * Escreva um programa que gere a saída abaixo.
Restrições:
→ A instrução “printf” pode ser utilizada no máximo 2 vezes;
→ O \n para saltar linha pode ser utilizado no máximo 2 vezes.
*
**
***
****
*****
******
*******
********
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int i, j;

	for(j = 1; j <= 8; j++)
	{
		for (i = 1; i <= j; i++)
			printf("*");
		printf("\n");
	}
	return (0);
}
