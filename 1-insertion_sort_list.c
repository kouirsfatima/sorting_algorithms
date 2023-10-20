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
        str = tmp;
        while (tmp->next && tmp->n > tmp->next->n)
        {
            str = tmp->next;
            tmp->next= tmp->next;
            tmp-> prev = tmp->prev;


            if (tmp->prev != NULL)
                tmp->prev->next = str;

            if (str->next != NULL)
                str->next->prev = tmp;

            tmp->next = str;
            str->prev = tmp;

            if (tmp->prev != NULL)

                *list = tmp;
        }

            print_list(*list);
           
        tmp = tmp->next;
    }
}
