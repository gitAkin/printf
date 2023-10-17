#include "main.h"
/**
 * output_unsigned_int - This function prints an unsigned integer
 * @list: This holds argument to print
 *
 * Return: number of characters printed
 */
int output_unsigned_int(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	int num, dec = n % 10, digit, ful = 1;
	int  a = 1;

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
