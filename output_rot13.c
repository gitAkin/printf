#include "main.h"


/**
 * output_rot13 - This function output str to rot13'ed string
 * @list: type struct va_arg where is allocated output arguments
 *
 * Return: counter
 */
int output_rot13(va_list list)
{
	int a, b, counter = 0;
	int c = 0;
	char *t = va_arg(list, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (t == NULL)
		t = "(null)";
	for (a = 0; t[a]; a++)
	{
		c = 0;
		for (b = 0; alpha[b] && !c; b++)
		{
			if (t[a] == alpha[b])
			{
				_putchar(beta[b]);
				counter++;
				c = 1;
			}
		}
		if (!c)
		{
			_putchar(t[c]);
			counter++;
		}
	}
	return (counter);
}
