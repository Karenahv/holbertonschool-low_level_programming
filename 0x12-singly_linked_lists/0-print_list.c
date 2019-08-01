#include <stdio.h>
#include "lists.h"

/**
 * print_list - print elements of a list_t list
 * @h: first element of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			i++;
		} else
		{
		printf("[%d] %s", h->len, h->str);
		i++;
		h = h->next;
		printf("\n");
		}
	}
	return (i);

}
