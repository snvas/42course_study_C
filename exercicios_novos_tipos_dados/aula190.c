#include <stdio.h>
#include <stdlib.h>

// Aula 190: É possível criar um ponteiro para struct?

typedef struct{
	int dia, mes, ano;
}Data;

//manipulando um ponteiro para struct
void imprimirData(Data *x){
	printf("%d/%d/%d\n", x->dia, x->mes, x->ano);
}

int main(){
	Data data;
	Data *pdata;

	pdata = &data;

	printf("data: %p\tp: %p\n", &data, pdata);

	data.dia = 29;
	data.mes = 2;
	data.ano = 2020;

	imprimirData(pdata);
//manipulando a variáriel do tipo data usa o ponto
	printf("%d/%d/%d\n", data.dia, data.mes, data.ano);

	return (0);
}