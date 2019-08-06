#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: first element of the list
 * @idx: index of the node we want to insert
 * @n: value of the node
 * Return: the value of a n node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	struct listint_s *temp = NULL;
	struct listint_s *new = NULL;
	int count;

	count = 0;
	i = 0;
	new = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (*head ==  NULL || new == NULL || head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (*head == 0)
		return (NULL);
	temp = *head;
	new->n = n;
	while (i < idx)
	{
		if (i == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			count = 1;
			break;
		}
		i++;
		temp = temp->next;
	}
	if (count == 0)
		return (NULL);
	return (new);
}
