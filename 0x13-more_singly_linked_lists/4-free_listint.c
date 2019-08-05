#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: first element of the list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	struct listint_s *temp = NULL;
	struct listint_s *aux =  NULL;

	temp = head;
	while (temp != NULL)
	{
		aux = temp->next;
		free(temp);
		temp = aux;
	}
	head = NULL;
}
