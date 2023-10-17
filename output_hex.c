#include "main.h"

/**
 * output_hex - this function prints an hexdecimal number.
 * @list: This holds arguments.
 *
 * Return: counter.
 */
int output_hex(va_list list)
{
	int a;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(list, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		array[a] = tem % 16;
		tem /= 16;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 39;
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
