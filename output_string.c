#include "main.h"


/**
 * str_len - This function returns the lenght of a string.
 * @t: Type char pointer
 *
 * Return: a
 */
int str_len(char *t)
{
	int a;

	for (a = 0; t[a] != 0; a++)
		;
	return (a);

}
/**
 * str_lenc - This is strlen function but applied
 * for constant char pointer s
 * @t: Type char pointer
 *
 * Return: a
 */
int str_lenc(const char *t)
{
	int a;

	for (a = 0; t[a] != 0; a++)
		;
	return (a);
}
