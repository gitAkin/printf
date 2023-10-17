#include "main.h"

/**
 * output_HEXAD - This function prints an hexdecimal number.
 * @list: This holds the arguments.
 *
 * Return: counter.
 */
int output_HEXAD(va_list list)
{
	int counter = 0;
	unsigned int num = va_arg(list, unsigned int);
	unsigned int tem = num;
	int a;
	int *array;

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
			array[a] = array[a] + 7;
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
