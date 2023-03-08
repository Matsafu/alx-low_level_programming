#include <unistd.h>

/**
 * _putchar - writes a single character to the standard output stream, stdout.
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
