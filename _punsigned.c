#include "main.h"

/**
 * prinu - does the actual printing
 * @u: int to be printedi
 */
void prinu(unsigned int u)
{
	if (u / 10)
	{
		prinu(u / 10);
	}
	_putchar(u % 10 + '0');
}
/**
 * leu - calculates no of printed chars
 * @i: argument
 * Return: length
 */
int leu(unsigned int i)
{
	int l = 0;

loop:
	if (i / 10)
	{
		l++;
		i = i / 10;
		goto loop;
	}
	l++;
	return (l);
}
/**
 * _punsigned - prints an unsigned int argument
 * @arg: argument
 * Return: no of chars printed
 */
int _punsigned(va_list arg)
{
	int len = 0;
	unsigned int x;

	x = va_arg(arg, unsigned int);
	len = leu(x);
	prinu(x);
	return (len);
}
