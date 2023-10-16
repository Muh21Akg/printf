#include "main.h"

/**
 * _phexadecimal - A function that prints ASCII value in uppcase hexa
 * @x: value to print
 * Return: number of bytes printed
 */
int _phexadecimal(va_list x)
{
	unsigned int a[8];
	unsigned int i, input, maxx = 268435456, sum = 0;
	int counter = 0;
	char calc = 'A' - ':';

	input = va_arg(x, unsigned int);
	a[0] = input / maxx;
	for (i = 1; i < 8; i++)
	{
		maxx /= 16;
		a[i] = (input / maxx) % 16;
	}
	for (i = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar(a[i] + '0');
			else
				_putchar(calc + a[i] + '0');
			counter++;
		}
	}
	return (counter);
}
