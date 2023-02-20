#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char b;

	int n;

	b = 'a';
	n = '0';
	while (n < 10)
	{
	putchar(n + '0');
	n++;
	}
	while (b <= 'a')
	{
	putchar(b);
	b++;
	}
	putchar('\n');
	return (0);
}
