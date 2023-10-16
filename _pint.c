#include "main.h"

/**
 * _pint - A function that prints a decimal int
 * @i: interger input
 * Return: number of bytes
 */
int _pint(va_list i)
{
	int a[10];
	int j = 1, m = 1000000000, input, sum = 0, counter = 0;

	input = va_arg(i, int);
	if (input < 0)
	{
		input *= -1;
		_putchar('-');
		counter++;
	}
	a[0] = input / m;

	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (input / m) % 10;
	}
	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			counter++;
		}
	}
	return (counter);
}
