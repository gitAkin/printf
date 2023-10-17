#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - This function matches the
 * conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int output_chara(va_list list);
int output_pointer(va_list list);
int output_hexaa(unsigned long int num);
int output_HEXADEC(unsigned int num);
int output_special_str(va_list list);
int output_HEXAD(va_list list);
int output_hex(va_list list);
int output_octa(va_list list);
int output_unsigned_int(va_list list);
int output_binar(va_list list);
int output_reverse_str(va_list list);
int output_rot13(va_list list);
int output_inte(va_list list);
int output_deci(va_list list);
int str_len(char *t);
int *_strcpy(char *dest, char *src);
int str_lenc(const char *t);
int rev_string(char *s);
int str_lenc(const char *t);
int output_percent(void);
int output_string(va_list list);
int _putchar(char t);
int _printf(const char *format, ...);

#endif
