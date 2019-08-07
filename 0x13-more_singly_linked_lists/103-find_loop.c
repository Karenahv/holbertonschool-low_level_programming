#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: first element of the list
 * Return: the node where estarts the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			while (1)
			{
				slow = fast;
				while (fast->next != slow && fast->next != head)
					fast = fast->next;
				if (fast->next == head)
					break;
				head = head->next;
			}
			return (head);
		}

	}
	return (NULL);

}
