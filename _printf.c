#include "main.h"

/**
 * _printf - a custom formatted print function
 * @format: format string
 * Return: length of printed string
 */
int _printf(const char *format, ...)
{
	f_func fun[] = {
		{"d", _pint},
		{"c", _pchar},
		{"s", _pstring}, {"X", _phexadecimal},
		{"r", _preverse}, {"o", _poctal}, {"x", _phexa},
		{"i", _pinteger}, {"u", _punsigned}, {"b", _pbinary}
	};
	int i, funs, len;
	va_list arg;

	i = len = 0;
	va_start(arg, format);
loop:
	for (; format[i] && format; i++)
		{
		funs = 0;
		for (; funs < 10; funs++)
		{
			if (format[i] == '%')
			{
				if (fun[funs].src[0] == format[i + 1])
				{
					len += fun[funs].des(arg);
					i += 2;
					goto loop;
				}
				else if (format[i + 1] == '%')
				{
					_putchar('%');
					len++;
					i += 2;
				}
			}
		}
		_putchar(format[i]);
		len++;
	}
	va_end(arg);
	return (len);
}
