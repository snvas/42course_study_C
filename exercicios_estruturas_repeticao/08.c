/******************
 * Escreva um programa em C que funcione 
 * como uma calculadora. O programa deve apresentar
um menu ao usuário da seguinte forma:
1 – Somar
2 – Subtrair
3 – Multiplicar
4 – Dividir
0 – Sair

Uma estrutura do tipo switch deve ser utilizada 
para realizar cada operação em um case. Após a
escolha da operação, dois valores devem ser pedidos 
ao usuário para realizar a operação escolhida.
Se a operação escolhida for a 4 o dividendo não pode 
ser zero, um novo valor deve ser solicitado. O
programa deve funcionar até que o usuário 
escolha a opção 0 (opção de saída).
 */ 
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int opcao, num1, num2;

	do{
		printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n0 - Sair\n\n");
		scanf("%d", &opcao);
		if(opcao > 0 && opcao < 5)
		{
			printf("Digite dois valores: ");
			scanf("%d%d", &num1, &num2);
		}

		switch(opcao){
			case 0:
				printf("Saindo...\n\n");
				break ;
			case 1:
				printf("Soma: %d\n\n", num1 + num2);
				break;
			case 2:
				printf("Subtração: %d\n\n", num1 - num2);
				break;
			case 3:
				printf("Multiplicação: %d\n\n", num1 * num2);
				break;
			case 4:
				while (num2 == 0){
					printf("Não existe divisão por zero!\nDigite outro valor: ");
					scanf("%d", &num2);		
				}
				printf("Divisão: %d\n\n", num1 / num2);
				break;
			default:
				printf("Opção inválida\n\nDigite outra opção: \n");
		}
	}while (opcao != 0);
}	