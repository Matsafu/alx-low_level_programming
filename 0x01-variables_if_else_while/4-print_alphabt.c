#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Prints alphabets in lowercase
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char e, q, low;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}
	putchar('\n');
	return (0);
}
