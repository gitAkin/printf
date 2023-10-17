#include "main.h"

/**
 * output_chara - This function prints a character.
 * @list: This holds arguments.
 *
 * Return: 1.
 */
int output_chara(va_list list)
{
	char t;

	t = va_arg(list, int);
	_putchar(t);
	return (1);
}
