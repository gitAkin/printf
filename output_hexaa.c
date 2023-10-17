#include "main.h"

/**
 * output_hexaa - This function prints an hexadecimal number.
 * @num: This holds arguments.
 *
 * Return: counter.
 */
int output_hexaa(unsigned long int num)
{
	long int a;
	long int *array;
	long int counter = 0;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

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
