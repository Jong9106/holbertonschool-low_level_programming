#include "dog.h"

/**
 * init_dog - Entry point
 *@d: pointer to dog
 *@name: pointer to char
 *@age: float variable
 *@owner: pointer to char
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age  = age;
		d->owner = owner;
	}
}
