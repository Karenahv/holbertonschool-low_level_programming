#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to the first element of the list
 * @n:integer
 * Return: the pointer to a new node at the beginning of a dlistint_t list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *temp = NULL;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		newnode->next = *head;
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;
	newnode->prev = temp;
	newnode->next = NULL;
	return (newnode);
}
