/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:47:27 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/19 17:23:02 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node *next;
} Node;

typedef struct 
{
	Node *begin;
	int size;
}List;

void create_list(List *list){
	list->begin = NULL;
	list->size = 0;
}

//procedure to insert in the beginning of a list
void insert_in_begin(List *list, int num)
{
	Node *new = malloc(sizeof(Node));

	if (new)
	{
		new->value = num;
		new->next = list->begin;
		list->begin = new;
		list->size++;
	}
	else
		printf("Erro ao alocar memória!\n");

}

//procedure to insert at the end of a list
void insert_in_end(List *list, int num)
{
	Node *aux, *new = malloc(sizeof(Node));

	if (new)
	{
		new->value = num;
		new->next = NULL;

		//is the first?
		if (list->begin == NULL)
			list->begin = new;
		else{
			aux = list->begin;
			while (aux->next)
				aux = aux->next;
			aux->next = new;
		}
		list->size++;
	}
	else
		printf("Erro ao alocar memória\n");
}

//procedure to insert in the middle of a list
void insert_in_middle(List *list, int num, int prev)
{
	Node *aux, *new = malloc(sizeof(Node));

	if (new)
	{
		new->value = num;
		//is the first?
		if (list->begin == NULL)
		{
			new->next = NULL;
			list->begin = new;
		}
		else
		{
			aux = list->begin;
			while (aux->value != prev && aux->next)
				aux = aux->next;
			new->next = aux->next;
			aux->next = new;
		}
		list->size++;
	}
	else
		printf("Erro ao alocar memória\n");
}

void insert_ordered(List *list, int num)
{
	Node *aux, *new =  malloc(sizeof(Node));

	if (new)
	{
		new->value = num;
		if(list->begin == NULL)
		{
			new->next = NULL;
			list->begin = new;
		}
		else if(new->value < list->begin->value)
		{
			new->next = list->begin;
			list->begin = new;
		}
		else{
			aux = list->begin;
			while(aux->next && new->value > aux->next->value)
				aux = aux->next;
			new->next = aux->next;
			aux->next = new;
		}
		list->size++;
	}
	else
			printf("Erro ao alocar memória!\n");
}

Node* to_remove(List *list, int num)
{
	Node *aux, *remove = NULL;

	if(list->begin)
	{
		if(list->begin->value == num)
		{
			remove = list->begin;
			list->begin = remove->next;
			list->size--;
		}
		else{
			aux = list->begin;
			while (aux->next && aux->next->value != num)
				aux = aux->next;
			if(aux->next)
			{
				remove = aux->next;
				aux->next = remove->next;
				list->size--;
			}		
		}
	}
	return remove;
}

Node* search(List *list, int num)
{
	Node *aux, *node = NULL;

	aux = list->begin;
	while (aux && aux->value != num)
		aux = aux->next;
	if (aux)
		node = aux;
	return (node);
}

void printList(List list)
{
	Node *node = list.begin;
	printf("\n\tLista size %d: ", list.size);
	while (node)
	{
		printf("%d ", node->value);
		node = node->next;
	}
	printf("\n\n");
}

int main()
{
	int option, previous, value;
	Node *removed;
	List list;

	create_list(&list);
	do{
		printf("\n\t0 - Sair\n\t1 - InserirInicio\n\t2 - inserirFim\n\t3 - InserirMeio\n\t4 - InserirOrdenado\n\t5 - Remover\n\t6 - Imprimir\n\t7 - Buscar\n\t");
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
				printf("Digite um valor: ");
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
				printf("Digite um valor a ser buscado: ");
				scanf("%d", &value);
				removed = search(&list, value);
				if (removed)
					printf("Elemento encontrado: %d\n", removed->value);
				else
					printf("Não encontrado!");
				break;
			default:
				if (option != 0)
					printf("Opcao Inválida!\n");
			}	
		}while (option != 0);	
		return (0);
}
