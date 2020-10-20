#include "dog.h"

/**
 * print_dog - Entry point
 *@d: pointer to dog
 *
 * Return: Always 0 (Success)
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
