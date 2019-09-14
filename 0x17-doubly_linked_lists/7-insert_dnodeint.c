#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node at the beginning of a dlistint_t list.
 * @h: pointer to the first element of the list
 * @idx:index
 * @n:number
 * Return: the pointer to a new node at the beginning of a dlistint_t list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = NULL;
	dlistint_t *temp2 = NULL;
	dlistint_t *temp3 = NULL;
	dlistint_t *newnode = NULL;
	unsigned int i = 0, j = 0;

	if (h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*h == NULL || idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}
	temp3 = *h;
	for (i = 0; temp3->next != NULL; i++)
		temp3 = temp3->next;
	if (i == idx - 1)
	{
		newnode = add_dnodeint_end(h, n);
		return (newnode);
	}
	if (idx >= i + 2)
		return (NULL);
	temp = *h;
	while (j < idx - 1)
	{
		temp = temp->next;
		j++;
	}
	temp2 = temp->next;
	temp->next = newnode;
	newnode->next = temp2;
	newnode->prev = temp;
	temp2->prev = newnode;
	return (newnode);
}
