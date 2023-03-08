#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * _putchar - language that writes a single character to stdout
 * @s: The string to print
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	s++;
	_puts_recursion(s);
}

