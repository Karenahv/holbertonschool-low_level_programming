#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the first element of the list
 * @n:integer
 * Return: the pointer to a new node at the beginning of a dlistint_t list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	newnode->n = n;
	(*head)->prev = newnode;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
