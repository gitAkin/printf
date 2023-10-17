#include "main.h"


/**
 * _printf - This is a function that selects the correct function to print.
 * @format: This is an identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match k[] = {
		{"%c", output_chara},
		{"%%", output_percent}, {"%s", output_string},
		{"%i", output_inte}, {"%d", output_deci},
		{"%r", output_reverse_str}, {"%R", output_rot13},
		{"%b", output_binar}, {"%u", output_unsigned_int},
		{"%o", output_octa}, {"%x", output_hex}, {"%X", output_HEXAD},
		{"%S", output_special_str}, {"%p", output_pointer}
	};

	va_list list;
	int a = 0, b, lent = 0;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (k[b].id[0] == format[a] && k[b].id[1] == format[a + 1])
			{
				lent += k[b].f(list);
				a = a + 2;
				goto Here;
			}
			b--;
		}
		_putchar(format[a]);
		lent++;
		a++;
	}
	va_end(list);
	return (lent);
}
