#include "main.h"

/**
 * prinb - does the actual printing
 * @x: int to be printedi
 */
void prinb(int x)
{
	if (x < 0)
	{
		_putchar('-');
		x = -1 * x;
	}
	if (x / 2)
	{
		prinb(x / 2);
	}
	_putchar(x % 2 + '0');
}
/**
 * leb - calculates no of printed chars
 * @x: argument
 * Return: length
 */
int leb(int x)
{
	int len = 0;

	if (x < 0)
	{
		len++;
		x = x * -1;
	}
loop:
	if (x / 2)
	{
		len++;
		x = x / 2;
		goto loop;
	}
	len++;
	return (len);
}
/**
 * _pbinary - prints an int argument
 * @arg: argument
 * Return: no of chars printed
 */
int _pbinary(va_list arg)
{
	int x, len = 0;

	x = va_arg(arg, int);
	len = leb(x);
	prinb(x);
	return (len);
}
