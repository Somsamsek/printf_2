#include "main.h"

/**
 * _hexadec - prints a number in hexadecimal base,
 *
 * @a: va_list arguments from _printf
 * @p: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */

int _hexadec(va_list a, options *p)
{
	unsigned int num = va_arg(a, unsigned int);
	char *g = convert(num, 16, 1);
	int countin = 0;

	if (p->hash == 1 && g[0] != '0')
		countin += _puts("0x");
	countin += _puts(g);
	return (countin);
}

/**
 * _hexbig - prints a number in hexadecimal base,
 *
 * @a: va_list arguments from _printf
 * @p: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */

int _hexbig(va_list a, options *p)
{
	unsigned int num = va_arg(a, unsigned int);
	char *g = convert(num, 16, 0);
	int countin = 0;

	if (p->hash == 1 && g[0] != '0')
		countin += _puts("0X");
	countin += _puts(g);
	return (countin);
}

/**
 * _binary - prints a number in base 2
 * @a: va_list arguments from _printf
 * @p: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */

int _binary(va_list a, options *p)
{
	unsigned int num = va_arg(a, unsigned int);
	char *g = convert(num, 2, 0);

	(void)p;
	return (_puts(g));
}

/**
 * _octal - prints a number in base 8
 * @a: va_list arguments from _printf
 * @p: pointer to the struct that determines
 * if a flag is passed to _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */

int _octal(va_list a, options *p)
{
	unsigned int num = va_arg(a, unsigned int);
	char *g = convert(num, 8, 0);
	int countin = 0;

	if (p->hash == 1 && g[0] != '0')
		countin += _putchar('0');
	countin += _puts(g);
	return (countin);
}
