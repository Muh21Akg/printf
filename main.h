#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _pchar(va_list);
int _pstring(va_list);
int _preverse(va_list);
int _pinteger(va_list);
int _pint(va_list i);
int _punsigned(va_list);
int _pbinary(va_list);
int _poctal(va_list);
int _phexadecimal(va_list x);
int _phexa(va_list x);
/**
 * struct format_functions - structure of type format with two elements
 * @src: placeholder
 * @des: function to process it
 */
typedef struct format_functions
{
	char *src;
	int (*des)(va_list);
} f_func;

#endif
