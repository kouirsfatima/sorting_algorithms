#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: double linked list
 * No return value
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *str;

	if (list == NULL)
		return;

	tmp = *list;
	while (tmp != NULL)
	{
		while (tmp->next != NULL && tmp->next->n < str->n)
		{
			tmp = tmp->next;
			str = str->next = tmp->next;
			tmp->prev = tmp->prev;

			if (tmp->prev != NULL)
				str->prev->next = str;
			tmp->next = str;
			str->prev = tmp;

			if (tmp->prev != NULL)
				*list = tmp;
		}

		print_list(*list);

		tmp = tmp->next;
	}
}
