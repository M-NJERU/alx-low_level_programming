#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints all the data of a dog
 * @d: dog structure
 * init_dog - structure
 * @name: name of dog
 * @age: age of dog
 * @owner:owner of dog
 *
 * Return: NULL
 */
void print_dog(struct dog *d)
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %s\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}


