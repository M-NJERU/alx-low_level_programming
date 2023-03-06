#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int  value = 0;
	int check;

	while (*s)
	{
	for (check = 0; accept[check] != '\0'; check++)
	{
		if (*s  == accept[check])
		{
			value++;
			break;
		}
		else if (accept[check + 1] == '\0')
			return (value);
		}
		s++;
		}
		return (0);
}

