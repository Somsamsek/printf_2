#include "main.h"

/**
 * _address - prints address of input in hex format
 * @a: va_list arguments from _printf
 * @p: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */

int _address(va_list a, options *p)
{
	char *g;
	unsigned long int j = va_arg(a, unsigned long int);

	register int count = 0;

	(void)p;

	if (!j)
		return (_puts("(none)"));
	g = convert(j, 16, 1);
	count += _puts("0x");
	count += _puts(g);
	return (count);
}
