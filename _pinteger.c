#include "main.h"

/**
 * prin - does the actual printing
 * @x: int to be printedi
 */
void prin(int x)
{
	if (x < 0)
	{
		_putchar('-');
		x = -1 * x;
	}
	if (x / 10)
	{
		prin(x / 10);
	}
	_putchar(x % 10 + '0');
}
/**
 * le - calculates no of printed chars
 * @x: argument
 * Return: length
 */
int le(int x)
{
	int len = 0;

	if (x < 0)
	{
		len++;
		x = x * -1;
	}
loop:
	if (x / 10)
	{
		len++;
		x = x / 10;
		goto loop;
	}
	len++;
	return (len);
}
/**
 * _pinteger - prints an int argument
 * @arg: argument
 * Return: no of chars printed
 */
int _pinteger(va_list arg)
{
	int x, len = 0;

	x = va_arg(arg, int);
	len = le(x);
	prin(x);
	return (len);
}
