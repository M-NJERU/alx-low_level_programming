#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory to an array
 * @nmemb: number of members
 * @size:size
 *
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	p = malloc(l);

	if (p == NULL)
		return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
