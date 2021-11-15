/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   circular_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 12:47:27 by snovaes           #+#    #+#             */
/*   Updated: 2021/11/14 23:45:49 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int value;
	struct node *next;
} Node;

typedef struct{
	Node *begin;
	Node *end;
	int size;
}List;

void create_list(List *list)
{
	list->begin = NULL;
	list->end = NULL;
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
		if (list->end == NULL)
			list->end = new;
		list->end->next = list->begin;
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
		
		//is the first?
		if (list->begin == NULL)
		{
			list->begin = new;
			list->end = new;
			list->end->next = list->begin;
		}
		else{
			list->end->next = new;
			list->end = new;
			//list->end->next = list->begin;
			new->next = list->begin;
		}
		list->size++;
	}
	else
		printf("Erro ao alocar memória\n");
}

/*procedure to insert in the middle of a list
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
			*list = new;
		}
		else
		{
			aux = *list;
			while (aux->value != prev && aux->next)
				aux = aux->next;
			new->next = aux->next;
			aux->next = new;
		}
	}
	else
		printf("Erro ao alocar memória\n");
}
*/
void insert_ordered(List *list, int num)
{
	Node *aux, *new = malloc(sizeof(Node));

	if (new)
	{
		new->value = num;
		if (list->begin == NULL)
		{
			insert_in_begin(list, num);
		}
		else if (new->value < list->begin->value)
		{
			insert_in_begin(list, num);
		}
		else
		{
			aux = list->begin;
			while(aux->next != list->begin && new->value > aux->next->value)
				aux = aux->next;
			if (aux->next == list->begin)
				insert_in_end(list, num);
			else{
				new->next = aux->next;
				aux->next = new;
				list->size++;			
			}
		}
	}
	else
		printf("Erro ao alocar memória!\n");
}

Node* to_remove(List *list, int num)
{
	Node *aux, *remove = NULL;

	if(list->begin)
	{
		if (list->begin == list->end && list->begin->value == num){
			remove = list->begin;
			list->begin = NULL;
			list->end = NULL;
			list->size--;
		}
		else if(list->begin->value == num)
		{
			remove = list->begin;
			list->begin = remove->next;
			list->end->next = list->begin;
			list->size--;
		}
		else{
			aux = list->begin;
			while (aux->next != list->begin && aux->next->value != num)
				aux = aux->next;
			if (aux->next->value == num)
			{
				if (list->begin == aux->next)
				{
					remove = aux->next;
					aux->next = remove->next;
					list->end = aux;
				}
				else
				{
					remove = aux->next;
					aux->next = remove->next;
				}
				list->size--;
			}		
		}
	}
	return remove;
}

Node* search(List *list, int num)
{
	Node *aux = list->begin; 
	
	if (aux)
	{
		do{
			if(aux->value == num)
				return aux;
			aux = aux->next;
		}while(aux != list->begin);
	}
	return NULL;
}

void printList(List list)
{
	Node *aux = list.begin;

	printf("\n\tLista size %d: ", list.size);
	if(aux)
	{	do{
			printf("%d ", aux->value);
			aux = aux->next;
		}while(aux != list.begin);
		printf("\nInício: %d\n", aux->value);
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
		printf("\n\t0 - Sair\n\t1 - InserirInicio\n\t2 - inserirFim\n\t3 - InserirOrdenado\n\t4 - Remover\n\t5 - Imprimir\n\t6 - Pesquisar\n\t");
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
			printf("Digite um valor: ");
			scanf("%d", &value);
			insert_ordered(&list, value);
			break;
		case 4:
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
		case 5:
			printList(list);
			break;
		case 6:
			printf("Digite um valor a ser pesquisado: ");
			scanf("%d", &value);
			removed = search(&list, value);
			if (removed)
				printf("Elemento encontrado: %d\n", removed->value);
			else
				printf("Não encontrado!");
			break;
		default:
			if(option != 0)
				printf("Opção inválida!\n");
		}
	}
	while (option != 0);
	
	return 0;
}
