#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character g to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 */

int _putchar(char c)
{
	static char buf[1024];
	static int j;

	if (c == -1 || j >= 1024)
	{
		write(1, &buf, j);
		j = 0;
	}
	if (c != -1)
	{
		buf[j] = c;
		j++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @sr: pointer to the string to print
 * Return: number of chars written
 */

int _puts(char *sr)
{
	register int j;

	for (j = 0; sr[j] != '\0'; j++)
		_putchar(sr[j]);
	return (j);
}
