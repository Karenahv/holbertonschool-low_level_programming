#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print elements of a list_t list
 * @h: first element of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		{
			printf("%d", h->n);
			i++;
			h = h->next;
			printf("\n");
		}
	}
	return (i);

}
