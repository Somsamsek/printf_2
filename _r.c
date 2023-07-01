#include "main.h"

/**
 * _bigS - Non printable characters
 * (0 < ASCII value < 32 or >= 127) are
 * printed this way: \x, followed by the ASCII code
 * value in hexadecimal (upper case - always 2 characters)
 * @a: va_list arguments from _printf
 * @p: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */


int _bigS(va_list a, options *p)
{
	int i, countin = 0;
	char *res;
	char *g = va_arg(a, char *);

	(void)p;
	if (!g)
		return (_puts("(null)"));

	for (i = 0; g[i]; i++)
	{
		if (g[i] > 0 && (g[i] < 32 || g[i] >= 127))
		{
			_puts("\\x");
			countin += 2;
			res = convert(g[i], 16, 0);
			if (!res[1])
				countin += _putchar('0');
			countin += _puts(res);
		}
		else
			countin += _putchar(g[i]);
	}
	return (countin);
}

/**
 * _rev - prints a string in reverse
 * @a: argument from _printf
 * @p: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */

int _rev(va_list a, options *p)
{
	int i = 0, j;
	char *g = va_arg(a, char *);

	(void)p;
	if (!g)
		g = "(null)";

	while (g[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(g[j]);

	return (i);
}

/**
 * _rot13 - prints a string using rot13
 * @a: list of arguments from _printf
 * @p: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */

int _rot13(va_list a, options *p)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *g = va_arg(a, char *);

	(void)p;
	for (j = 0; g[j]; j++)
	{
		if (g[j] < 'A' || (g[j] > 'Z' && g[j] < 'a') || g[j] > 'z')
			_putchar(g[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (g[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}

/**
 * _percent - prints a percent
 * @a: va_list arguments from _printf
 * @p: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */

int _percent(va_list a, options *p)
{
	(void)a;
	(void)p;
	return (_putchar('%'));
}
