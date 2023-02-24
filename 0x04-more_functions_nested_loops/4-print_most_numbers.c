#include "main.h"

/**
 * print_most_numbers - prints the numbers since 0 upto 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 upto 9
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; ++x)
	{
	if (x == 2 || x == 4)
		continue;
	_putchar(x + 48);
	}
	_putchar('\n')
}
