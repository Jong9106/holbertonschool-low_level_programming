#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#ifndef __DOG_H_
#define __DOG_H_

/**
 * struct dog - structure for 0-main.c
 * @name: pointer to name
 * @age: age number
 * @owner: pointer to owner
 *
 * Description: structure to define dogs documentation
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);
void free_dog(dog_t *d);


#endif
