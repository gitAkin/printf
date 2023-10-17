#include "main.h"


/**
 * output_deci - This function prints decimal
 * @list: This holds argument to print
 *
 * Return: number of characters printed
 */

int output_deci(va_list list)
{
	int n = va_arg(list, int);
	int num, dec = n % 10, digit;
	int  a = 1;
	int ful = 1;

	n = n / 10;
	num = n;

	if (dec < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		dec = -dec;
		a++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			ful = ful * 10;
			num = num / 10;
		}
		num = n;
		while (ful > 0)
		{
			digit = num / ful;
			_putchar(digit + '0');
			num = num - (digit * ful);
			ful = ful / 10;
			a++;
		}
	}
	_putchar(dec + '0');

	return (a);
}
