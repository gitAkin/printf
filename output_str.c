#include "main.h"
/**
 * output_string - This function print a string.
 * @list: This holds argument.
 *
 * Return: the length of the string.
 */

int output_string(va_list list)
{
	char *t;
	int a, lent;

	t = va_arg(list, char *);
	if (t == NULL)
	{
		t = "(null)";
		lent = str_len(t);
		for (a = 0; a < lent; a++)
			_putchar(t[a]);
		return (lent);
	}
	else
	{
		lent = str_len(t);
		for (a = 0; a < lent; a++)
			_putchar(t[a]);
		return (lent);
	}
}
