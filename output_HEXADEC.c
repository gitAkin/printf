#include "main.h"

/**
 * output_HEXADEC - This function prints an hexdecimal number.
 * @num: number to print.
 * Return: counter.
 */
int output_HEXADEC(unsigned int num)
{
	int counter = 0;
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
