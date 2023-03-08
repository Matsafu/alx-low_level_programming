#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns a factorial of a given number.
 * _putchar -  language that writes a single character to stdout
 * @n: number to calcute the factorial
 * Return: int value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
