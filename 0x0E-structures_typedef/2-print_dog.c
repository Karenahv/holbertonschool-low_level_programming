#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print atributes of dog struct
 *@d:dog struct
 * Return: no return
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
		       d->name == NULL ? "(nil)" : d->name,
		       d->age,
		       d->owner == NULL ? "(nil)" : d->owner);
	}
}
