/*
Elabore um programa que, dado o número do mês, 
indica quantos dias têm esse mês. Utilize para
isso a estrutura de seleção switch.
Obs.: Considere fevereiro como tendo 28 dias.
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int month;

	printf("Digite um número: ");
	scanf("%d", &month);

	switch (month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\nO mês possui 31 dias\n");
			break;
		case 2:
			printf("\nO mês possui 28 dias\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\nO mês possui 30 dias\n");
			break;
		default:
			printf("\nValor não corresponde a nunhum mês!\n");
	}
}