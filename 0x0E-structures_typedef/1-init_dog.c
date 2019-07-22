#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize struct dog
 *@d:structure
 *@name:name type char
 *@age: age type float
 *@owner: name of owner tyme char
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}


}
