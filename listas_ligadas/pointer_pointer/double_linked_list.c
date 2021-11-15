/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:47:27 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/14 22:38:59 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//double linked list example

typedef struct node
{
	int value;
	struct node *next;
	struct node *prev;
} Node;

//procedure to insert in the beginning of a list
void insert_in_begin(Node **list, int num)
{
	Node *new = malloc(sizeof(Node));

	if (new)
	{
		new->value = num;
		new->next = *list;
		new->prev = NULL;
		if (*list)
			(*list)->prev = new;
		*list = new;
	}
	else
		printf("Erro ao alocar memória!\n");

}

//procedure to insert at the end of a list
void insert_in_end(Node **list, int num)
{
	Node *aux, *new = malloc(sizeof(Node));

	if (new)
	{
		new->value = num;
		new->next = NULL;

		//is the first?
		if (*list == NULL)
		{
			*list = new;
			new->prev = NULL;
		}
		else{
			aux = *list;
			while (aux->next)
				aux = aux->next;
			aux->next = new;
			new->prev = aux;
		}
	}
	else
		printf("Erro ao alocar memória\n");
}

//procedure to insert in the middle of a list
void insert_in_middle(Node **list, int num, int prev)
{
	Node *aux, *new = malloc(sizeof(Node));

	if (new)
	{
		new->value = num;
		//is the first?
		if (*list == NULL)
		{
			new->next = NULL;
			new->prev = NULL;
			*list = new;
		}
		else
		{
			aux = *list;
			while (aux->value != prev && aux->next)
				aux = aux->next;
			new->next = aux->next;
			aux->next->prev = new;
			new->prev = aux;
			aux->next = new;
		}
	}
	else
		printf("Erro ao alocar memória\n");
}

void insert_ordered(Node **list, int num)
{
	Node *aux, *new = malloc(sizeof(Node));

	if (new)
	{
		new->value = num;
		if (*list == NULL)
		{
			new->next = NULL;
			new->prev = NULL;
			*list = new;
		}
		else if (new->value < (*list)->value)
		{
			new->next = *list;
			(*list)->prev = new;
			*list = new;
		}
		else
		{
			aux = *list;
			while(aux->next && new->value > aux->next->value)
				aux = aux->next;
			new->next = aux->next;
			if (aux->next)
				aux->next->prev = new;
			new->prev = aux;
			aux->next = new;
		}
	}
	else
		printf("Erro ao alocar memória!\n");
}

Node* to_remove(Node ** list, int num)
{
	Node *aux, *remove = NULL;

	if(*list)
	{
		if((*list)->value == num)
		{
			remove = *list;
			*list = remove->next;
			if (*list)
				(*list)->prev = NULL;
		}
		else{
			aux = *list;
			while (aux->next && aux->next->value != num)
				aux = aux->next;
			if(aux->next)
			{
				remove = aux->next;
				aux->next = remove->next;
				if (aux->next)
					aux->next->prev = aux;
			}		
		}
	}
	return remove;
}

Node* search(Node **list, int num)
{
	Node *aux, *node = NULL;

	aux = *list;
	while (aux && aux->value != num)
		aux = aux->next;
	if (aux)
		node = aux;
	return (node);
}

void printList(Node *node)
{
	printf("\n\tLista: ");
	while (node)
	{
		printf("%d ", node->value);
		node = node->next;
	}
	printf("\n\n");
}

Node* getLast(Node **list)
{
	Node *aux = *list;
	while (aux->next)
		aux = aux->next;
	return aux;	
}

void printReverse(Node *node)
{
	printf("\n\tLista: ");
	while (node)
	{
		printf("%d ", node->value);
		node = node->prev;
	}
	printf("\n\n");
}

int main()
{
	int option, previous, value;
	Node *removed, *list = NULL;
	
	do{
		printf("\n\t0 - Sair\n\t1 - InserirInicio\n\t2 - inserirFim\n\t3 - InserirMeio\n\t4 - InserirOrdenado\n\t5 - Remover\n\t6 - Imprimir\n\t7 - Pesquisar\n\t8 - ImprimirReverse\n");
		scanf("%d", &option);

		switch (option){
		case 1:
			printf("Digite um valor: ");
			scanf("%d", &value);
			insert_in_begin(&list, value);
			break;
		case 2:
			printf("Digite um valor: ");
			scanf("%d", &value);
			insert_in_end(&list, value);
			break;
		case 3:
			printf("Digite um valor e a referência: ");
			scanf("%d%d", &value, &previous);
			insert_in_middle(&list, value, previous);
			break;
		case 4:
			printf("Digite um valor: ");
			scanf("%d", &value);
			insert_ordered(&list, value);
			break;
		case 5:
			printf("Digite um valor a ser removido: ");
			scanf("%d", &value);
			removed = to_remove(&list, value);
			if(removed)
			{
				printf("Elemento a ser removido: %d\n", removed->value);
				free(removed);
			}
			else
				printf("Número inexistente na lista!\n");
			break;
		case 6:
			printList(list);
			break;
		case 7:
			printf("Digite um valor a ser pesquisado: ");
			scanf("%d", &value);
			removed = search(&list, value);
			if (removed)
				printf("Elemento encontrado: %d\n", removed->value);
			else
				printf("Não encontrado!");
			break;
		case 8:
			printReverse(getLast(&list));
			break;
		default:
			if(option != 0)
				printf("Opção inválida!\n");
		}
	}
	while (option != 0);
	
	return 0;
}
