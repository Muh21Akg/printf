#include "main.h"

/**
 * _pchar - prints a character argument
 * @arg: argument
 * Return: 1
 */
int _pchar(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}
