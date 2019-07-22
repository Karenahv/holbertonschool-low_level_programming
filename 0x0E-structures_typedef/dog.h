#ifndef DOG_H
#define DOG_H

int _putchar(char c);
/**
*struct dog - Initialize struct dog
*@name:name type char
*@age: age type float
*@owner: name of owner tyme char
*
*Description: name, age and owner of a dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
