#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: pointer to the first element of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;
	dlistint_t *temp = NULL;

	temp = head;
	while (temp != NULL)
	{
		aux = temp->next;
		free(temp);
		temp = aux;
	}
	head = NULL;
}
