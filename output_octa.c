#include "main.h"


/**
 * output_octa - This function prints an octal number.
 * @list: This holds arguments.
 *
 * Return: counter.
 */
int output_octa(va_list list)
{
	int a;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(list, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		array[a] = tem % 8;
		tem /= 8;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		_putchar(array[a] + '0');
	}
	free(array);
	return (counter);
}
