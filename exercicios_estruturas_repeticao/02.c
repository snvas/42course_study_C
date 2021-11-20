/******************
 * Escreva um programa que repita a leitura 
 * de uma senha até que ela seja válida. 
 * Para cada leitura de senha incorreta informada, 
 * escrever a mensagem “Senha Invalida”. 
 * Quando a senha for informada corretamente 
 * deve ser impressa a mensagem “Acesso Permitido” 
 * e o programa deve ser encerrado. 
 * Considere que a senha correta é o valor 123456.
*/
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int senha, senhaValida = 123456;

	printf("Digite sua senha: ");
	scanf("%d", &senha);

	while(senha != senhaValida)
	{
		printf("Senha inválida!\n\nDigite sua senha: ");
		scanf("%d", &senha);
	}
	printf("Acesso permitido!\n");
	return (0);
}
