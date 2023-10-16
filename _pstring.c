#include "main.h"

/**
 * _strlen - cqlculates length of string
 * @s: string to prt
 * Return: length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}

/**
 * _pstring - prints a string
 * @arg: string
 * Return: string length
 */
int _pstring(va_list arg)
{
	char *s;
	int i, len;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);
	return (len);
}
