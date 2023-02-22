#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: prompts the character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 *
 */

int isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
