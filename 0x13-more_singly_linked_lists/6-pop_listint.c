#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node and update the linked list
 * @head: first element of the list
 * Return: no return
 */
int pop_listint(listint_t **head)
{
	struct listint_s *temp = NULL;
	int i;

	if (*head == NULL)
		return (0);
	temp = *head;
	i = temp->n;
	*head = temp->next;
	free(temp);

	return (i);
}
