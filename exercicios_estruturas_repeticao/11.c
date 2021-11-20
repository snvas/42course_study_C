/******************
 * Um determinado material radioativo perde 
 * metade de sua massa a cada 50 segundos. 
 * Dada a massa inicial, em gramas, faça um 
 * programa que determine o tempo necessário 
 * para que essa massa se torne menor 
 * que 0,05 gramas.
 * 
*/

#include <stdio.h>
#include <stdlib.h>

int	main(void){
	float massa;
	int tempo = 0;
	
	printf("Digite a massa do material em gramas: ");
	scanf("%f", &massa);

	while (massa >= 0.05)
	{
		massa = massa / 2;
		tempo += 50;
	}
	printf("Massa final: %f\n", massa);
	printf("O tempo decorrido foi de %d segundos\n\n", tempo);
}