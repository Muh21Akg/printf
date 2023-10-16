#include "main.h"

/**
 * _strlenv - cqlculates length of string
 * @s: string
 * Return: length
 */
int _strlenv(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}

/**
 * _preverse - prints a string
 * @arg: string
 * Return: string length
 */
int _preverse(va_list arg)
{
	char *s;
	int i, len;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	len = _strlenv(s);
	for (i = (len - 1); i >= 0; i--)
		_putchar(s[i]);
	return (len);
}
