/*Aula 196: Implemente a função strcpy (char *destino, char *origem) usando ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

int ft_strcpy(char *destino, char *origem){
	int i = 0;
	while(*(origem + i) != '\0')
{
	*(destino + i) = *(origem + i);
	i++;
}
	*(destino + i) = '\0';
	return (i);
}

int main(){

	char destino[24], origem[24] = {"Bom dia."};

	printf("Tamanho: %d\n", ft_strcpy(destino, origem)); 
	printf("Destino: %s\n", destino);
	return (0);
}