#include "main.h"

/**
 * prino - does the actual printing
 * @u: int to be printedi
 */
void prino(unsigned int u)
{
	if (u / 8)
	{
		prino(u / 8);
	}
	_putchar(u % 8 + '0');
}
/**
 * leo - calculates no of printed chars
 * @i: argument
 * Return: length
 */
int leo(unsigned int i)
{
	int l = 0;

loop:
	if (i / 8)
	{
		l++;
		i = i / 8;
		goto loop;
	}
	l++;
	return (l);
}
/**
 * _poctal - prints an unsigned int argument
 * @arg: argument
 * Return: no of chars printed
 */
int _poctal(va_list arg)
{
	int len = 0;
	unsigned int x;

	x = va_arg(arg, unsigned int);
	len = leo(x);
	prino(x);
	return (len);
}
