#include "sort.h"

/**
 * insertion_sort_list - list sort for insertion
 * @list: is list to sort
 * Return: Nothing
 */
 void insertion_sort_list(listint_t **list)
 {
	listint_t *b = NULL;
	listint_t *a = NULL;
	listint_t *temp = NULL;
	int i, j;

	b = *list;
	while (b != NULL)
	{
		i = 1;
		a = b;
		while (a->prev != NULL && a->n < a->prev->n)
		{
			temp = a->prev;
			if (a->prev->prev != NULL)
				a->prev->prev->next = a;
			if (a->next != NULL)
				a->next->prev = a->prev;
			if (a->prev != NULL)
			{
				a->prev->next = a->next;
				a->prev = a->prev->prev;
			}
			if (a->next != NULL)
				a->next = a->next->prev;
			if (a->next != NULL)
				a->next->prev = a;
			if (a->next == NULL)
			{
				a->next = temp;
				temp->prev = a;
			}
			if (a->prev == NULL)
				*list = a;
			i++;
			print_list(*list);	
		}
		for (j = 0; j < i; j++)
			if (b != NULL)
				b = b->next;
	}

 }
 