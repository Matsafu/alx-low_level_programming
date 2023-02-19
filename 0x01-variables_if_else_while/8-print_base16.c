#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int o;
	char low;

	for (o = '0'; o <= '9'; o++)
	putchar(o);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
