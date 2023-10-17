#include "main.h"

/**
 * output_reverse_str - This function prints a str in reverse
 * @list: type struct va_list where is allocated output arguments
 *
 * Return: the string
 */
int output_reverse_str(va_list list)
{

	char *t = va_arg(list, char*);
	int a;
	int b = 0;

	if (t == NULL)
		t = "(null)";
	while (t[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; b--)
		_putchar(t[a]);
	return (b);
}
