#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: 0 success
 */
int main(void)
{
	int v;
	int w = 0;

	while (w  < 10)
	{
	v = 0;
	while (v < 10)
	{
	if (w != v && w < v)
	{
	putchar(w + '0');
	putchar(v + '0');
	if (w + v != 17)
	{
	putchar(',');
	putchar(' ');
	}
	}
	v++;
	}
	w++;
	}
	putchar('\n');
	return (0);
}
