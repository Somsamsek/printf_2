#include "main.h"

/**
 * _string - loops through a string and prints
 * @a: va_list arguments from _printf
 * @p: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */

int _string(va_list a, options *p)
{
	char *g = va_arg(a, char *);

	(void)p;

	if (!g)
		g = "(null)";
	return (_puts(g));
}

/**
 * _char - prints a character
 * @a: va_list arguments from _printf
 * @p: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */

int _char(va_list a, options *p)
{
	(void)p;
	_putchar(va_arg(a, int));
	return (1);
}
