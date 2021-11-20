/******************
 * Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O
monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com
grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o
primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro
anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
 * 
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	long double somatorio = 1, inicio = 1;
	int i;

	for(i = 2; i <= 64; i++)
	{
		inicio = inicio * 2;
		somatorio += inicio;
		printf("%d Valor: %.Lf\n", i, inicio);
	}
	printf("->Valor: %.Lf\n", somatorio);
	return (0);
}
