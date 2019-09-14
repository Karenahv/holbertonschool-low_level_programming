#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print elements of a  dlistint_t list
 * @h: first element of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		i++;
		h = h->next;
		printf("\n");
	}
	return (i);
}
