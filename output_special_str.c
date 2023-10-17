#include "main.h"
/**
 * output_special_str - This function prints special string.
 * @list: Hold the argument.
 *
 * Return: the length of the string.
 */

int output_special_str(va_list list)
{
	char *t;
	int a, lent = 0;
	int cast;

	t = va_arg(list, char *);
	if (t == NULL)
		t = "(null)";
	for (a = 0; t[a] != '\0'; a++)
	{
		if (t[a] < 32 || t[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			lent = lent + 2;
			cast = t[a];
			if (cast < 16)
			{
				_putchar('0');
				lent++;
			}
			lent = lent + output_hexaa(cast);
		}
		else
		{
			_putchar(t[a]);
			lent++;
		}
	}
	return (lent);
}
