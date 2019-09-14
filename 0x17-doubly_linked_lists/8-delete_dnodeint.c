#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at the n position of dlistint_t list.
 * @head: pointer to the first element of the list
 * @index:index
 * Return: the pointer to a new node at the beginning of a dlistint_t list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	dlistint_t *temp2 = NULL;
	dlistint_t *temp3 = NULL;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if ((*head)->next == NULL)
	{

		free(*head);
		*head = NULL;
		return (1);
	}
	temp = *head;
	if (index == 0)
	{
		temp2 = (*head)->next;
		*head = temp2;
		temp2->prev = NULL;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	temp2 = temp->next;
	temp3 = temp->next->next;
	temp->next = temp3;
	temp3->prev = temp;
	free(temp2);
	return (1);
}
