#include "main.h"


/**
 * output_pointer - This function points to an address.
 * @list: This holds arguments.
 *
 * Return: counter.
 */
int output_pointer(va_list list)
{
	void *p;
	char *t = "(nil)";
	long int a;
	int b;
	int c;

	p = va_arg(list, void*);
	if (p == NULL)
	{
		for (c = 0; t[c] != '\0'; a++)
		{
			_putchar(t[c]);
		}
		return (c);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = output_hexaa(a);
	return (b + 2);
}
