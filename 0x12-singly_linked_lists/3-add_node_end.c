#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node_end - add a node at the end of the  lis_t list.
 * @head: Address of first element of the list
 *@str: pointer to string we want to print
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{

	struct list_s *new = NULL;
	struct list_s *temp = NULL;
	int i;

	new = (struct list_s *)malloc(sizeof(struct list_s));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	} else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);

}
