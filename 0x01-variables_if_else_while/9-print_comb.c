#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int l;

	for (l = 0; l < 100; l++)
	{
	putchar(l + '0');
	if (l < 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
