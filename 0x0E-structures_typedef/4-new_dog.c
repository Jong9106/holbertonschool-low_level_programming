#include "dog.h"

/**
 *new_dog - creates a new dog
 *@name: pointer to copy
 *@age: integer
 *@owner: pointer to copy
 *Return: pointer with copy
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *sultan;
	char *p;

	if (name == NULL || owner == NULL)
		return (NULL);
	sultan = malloc(sizeof(dog_t));
	if (sultan == NULL)
		return (NULL);
	for (i = 1, p = name; *p; i++)
		p++;
	sultan->name = malloc(i);
	if (sultan->name == NULL)
	{
		free(sultan);
		return (NULL);
	}
	for (i = 1, p = owner; *p; i++)
		p++;
	sultan->owner = malloc(i);
	if (sultan->owner == NULL)
	{
		free(sultan->name);
		free(sultan);
		return (NULL);
	}
	for (i = 0 ; *name != 0; i++, name++)
		sultan->name[i] = *name;
	sultan->name[i] = 0;
	for (i = 0 ; *owner != 0; i++)
		sultan->owner[i] = *owner++;
	sultan->owner[i] = 0;
	sultan->age = age;
return (sultan);
}
