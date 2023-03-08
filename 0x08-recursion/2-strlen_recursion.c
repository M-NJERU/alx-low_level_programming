#include "main.h"

/**
 * _strlen_recursion - function that returns the leng of a string
 *
 * @s: input
 * Return: integer value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
