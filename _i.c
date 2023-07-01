#include "main.h"

/**
 * _integers - prints an integer
 * @a: va_list of arguments from _printf
 * @p: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */

int _integers(va_list a, options *p)
{
	int n = va_arg(a, int);
	int res = count_digit(n);

	if (p->space == 1 && p->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (p->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * _unsigned_int - prints an unsigned integer
 * @a: va_list of arguments from _printf
 * @p: pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */

int _unsigned_int(va_list a, options *p)
{
	unsigned int u = va_arg(a, unsigned int);
	char *g = convert(u, 10, 0);

	(void)p;
	return (_puts(g));
}

/**
 * prnt_nums - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */

void prnt_nums(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * cnt_nums - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */

int cnt_nums(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
