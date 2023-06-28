#include "main.h"

/**
 * _printf - main printf function
 * @format: const character pointer
 * Return: b_lenght
 */

int _printf(const char *format, ...)
{
	int (*func)(va_list, options *);
	const char *r;
	va_list argu;
	options flags = {0, 0, 0};

	register int count = 0;

	va_start(argu, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (r = format; *r; r++)
	{
		if (*r == '%')
		{
			r++;
			if (*r == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*r, &flags))
				r++;
			func = get_print(*r);
			count += (func)
				? func(argu, &flags)
				: _printf("%%%c", *r);
		} else
			count += _putchar(*r);
	}
	_putchar(-1);
	va_end(argu);
	return (count);
}
