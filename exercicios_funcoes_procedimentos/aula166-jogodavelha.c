/**************
 * vamos desenvolver o jogo da velha 
 * com funções e procedimentos.
 */

#include <stdio.h>
#include <stdlib.h>

//variáveis globais
char jogo[3][3];
int l, c;

void inicializarMatriz(){
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++)
			jogo[l][c] = ' ';
	}
}

//imprimir jogo na tela
void imprimir(){
	printf("\n\n\t  0  1  2\n\n");
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			if (c == 0)
				printf("\t");
			printf(" %c ", jogo[l][c]);
			if(c < 2)
				printf("|");
			if(c == 2)
				printf("  %d ", l);
		}
		printf("\n");
		if (l < 2)
			printf("\t-----------\n");
	}
}

// verificar vitória por linha 1- ganhou/ 0 - não ganhou ainda
int ganhouPorLinha(int l, char c)
{
	if(jogo[l][0] == c && jogo[l][1] == c && jogo[l][2] == c)
		return 1;
	else
		return (0);
}

// verificar vitória por linhas
// 1- ganhou/ 0 - não ganhou ainda
int ganhouPorLinhas(char c){
	int ganhou = 0;
	for(l = 0; l < 3; l++){
		ganhou += ganhouPorLinha(l, c);
	}
	return ganhou;
}

// verificar vitória em uma coluna
int ganhouPorColuna(int c, char j){
	if(jogo[0][c] == j && jogo[1][c] == j && jogo[2][c] == j)
		return 1;
	else
		return (0);
}

//verificar vitória por colunas
int ganhouPorColunas(char j){
	int ganhou = 0;
	for(c = 0; c < 3; c++){
		ganhou += ganhouPorColuna(c, j);
	}
	return ganhou;
}

// verificar vitória na diagonal principal
int ganhouPorDiagonalPrin(char c){
	if(jogo[0][0] == c && jogo[1][1] == c && jogo[2][2] == c)
		return 1;
	else
		return (0);
}

// verificar vitória na diagonal Secundária
int ganhouPorDiagSec(char c){
	if(jogo[0][2] == c && jogo[1][1] == c && jogo[2][0] == c)
		return 1;
	else
		return (0);
}
//diz se uma coordenada é válida ou Não
int ehValida(int l, int c){
	if(l >= 0 && l < 3 && c >= 0 && c < 3 && jogo[l][c] == ' ')
		return 1;
	else
		return (0);
}

// ler as coordenadas do jogador
void lerCoordenadas(char j){
	int linha, coluna;

	printf("Digite linha e coluna: ");
	scanf("%d%d", &linha, &coluna);

	while(ehValida(linha, coluna) == 0){
		printf("Coordenadas inválidas! Digite outra linha e coluna: ");
		scanf("%d%d", &linha, &coluna);	
	}
	jogo[linha][coluna] = j;
}
// retorna a quantidade de posições vazias
int quantVazias(){
	int quantidade = 0;

	for(l = 0; l < 3; l++){
		for (c = 0; c < 3; c++)
			if(jogo[l][c] == ' ')
				quantidade++;
	}
	return quantidade;
}


// jogar com o loop principal do jogo
void jogar(){
	int jogador = 1, vitoriaX = 0, vitoria0 = 0;
	char jogador1 = 'X', jogador2 = '0';

	do{
		imprimir();
		if(jogador == 1)
		{
			lerCoordenadas(jogador1);
			jogador++;
			vitoriaX += ganhouPorLinhas(jogador1);
			vitoriaX += ganhouPorColunas(jogador1);
			vitoriaX += ganhouPorDiagonalPrin(jogador1);
			vitoriaX += ganhouPorDiagSec(jogador1);
		}
		else{
			lerCoordenadas(jogador2);
			jogador = 1;
			vitoriaX += ganhouPorLinhas(jogador2);
			vitoriaX += ganhouPorColunas(jogador2);
			vitoriaX += ganhouPorDiagonalPrin(jogador2);
			vitoriaX += ganhouPorDiagSec(jogador2);
		}
	}while(vitoriaX == 0 && vitoria0 == 0 && quantVazias() > 0);

	imprimir();
	
	if(vitoria0 == 1)
		printf("\nParabéns Jogador 2. Você venceu!!!\n");
	else if(vitoriaX == 1)
		printf("\nParabéns Jogador 1. Você venceu!!!\n");
	else
		printf("\nEmpate!!\n\n");
	

}

int	main(void){
	int opcao;

	do{
		inicializarMatriz();
		jogar();

		printf("\nDigite 1 para jogar novamente: ");
		scanf("%d", &opcao);
	}while(opcao == 1);

	return (0);
}