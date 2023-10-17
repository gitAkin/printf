#include "main.h"

/**
 * output_binar - This function prints a binary number.
 * @list: This holds arguments.
 *
 * Return: 1.
 */
int output_binar(va_list list)
{
	int flag = 0;
	int count = 0;
	int a, b = 1, c;
	unsigned int num = va_arg(list, unsigned int);
	unsigned int p;

	for (a = 0; a < 32; a++)
	{
		p = ((b << (31 - a)) & num);
		if (p >> (31 - a))
			flag = 1;
		if (flag)
		{
			c = p >> (31 - a);
			_putchar(c + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
