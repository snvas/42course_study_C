/*
O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso
e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo
com a tabela abaixo:

IMC Interpretação
Menor que 18,5 Abaixo do peso
Entre 18,5 e menor que 25 Peso normal
Entre 25 e menor que 30 Sobrepeso
Entre 30 e menor que 35 Obesidade grau 1
Entre 35 e menor que 40 Obesidade grau 2
Maior ou igual a 40 Obesidade grau 3 
*/
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	float weight, height, imc;

	printf("Digite seu peso (em Kg) e sua altura (em metros): ");
	scanf("%f%f", &weight, &height);

	imc = weight / (height * height);
	if (imc < 18.5)
		printf("IMC: %f\tAbaixo do Peso\n", imc);
	else if (imc >= 18.5 && imc < 25)
		printf("IMC: %f\tPeso Normal\n", imc);
	else if (imc >= 25 && imc < 30)
		printf("IMC: %f\tSobrepeso\n", imc);
	else if (imc >= 30 && imc < 35)
		printf("IMC: %f\tObesidade Grau 1\n", imc);
	else if (imc >= 35 && imc < 40)
		printf("IMC: %f\tObesidade Grau 2\n", imc);
	else
		printf("IMC: %f\tObesidade Grau 3\n", imc);
}