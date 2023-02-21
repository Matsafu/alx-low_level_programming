#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	char f;
	int i = 0;

	while (i <= 9)
	{
	for (f = 'a'; f <= 'z'; f++)
	{
	_putchar(f);
	}
	_putchar('\n');
	i++;
	}
}

