#include "main.h"

/**
 * _putchar - This function writes the character c to stdout
 * @t: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char t)
{
	return (write(1, &t, 1));
}
