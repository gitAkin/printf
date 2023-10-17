#include "main.h"


/**
 * output_inte - This function prints an integer
 * @list: This holds argument to print
 *
 * Return: number of characters printed
 */
int output_inte(va_list list)
{
	int b = va_arg(list, int);
	int num, dec = b % 10, digit, exp = 1;
	int  a = 1;

	b = b / 10;
	num = b;

	if (dec < 0)
	{
		_putchar('-');
		num = -num;
		b = -b;
		dec = -dec;
		a++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(dec + '0');

	return (a);
}
