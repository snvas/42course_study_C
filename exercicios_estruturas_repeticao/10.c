/******************
 * Você decidiu ficar rico guardando dinheiro 
 * por 30 dias consecutivos. Para tal, decidiu 
 * guardar 1 centavo no primeiro dia, 2 centavos 
 * no segundo dia, 4 centavos no terceiro dia, 
 * 8 centavos no quarto dia, e assim por diante. 
 * Faça um programa para calcular quanto você 
 * terá ao final dos 30 dias.
 * 
*/
#include <stdio.h>
#include <stdlib.h>

int	main(void){
	int i;
	int valorInicial;
	int valorFinal;

	valorInicial = 1;
	valorFinal = 1;
	for(i = 1; i < 30; i++){
		valorInicial = valorInicial * 2;
		valorFinal += valorInicial;
	}
	printf("Valor em centavos: %d\n\n", valorFinal);
	printf("Valor em R$ %.2f\n\n", valorFinal / 100.0);
	return (0);
}