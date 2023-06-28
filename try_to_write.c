#include "main.h"

/**
 * cnvrt - converts number and base into string
 * @num: input number
 * @bs: input base
 * @lwrcs: flag if hexa values need to be lowercase
 * Return: result string
 */

char *cnvrt(unsigned long int num, int bs, int lwrcs)
{
	static char *repre;
	static char buffer[50];
	char *ptr;

	repre = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = repre[num % bs];
		num /= bs;
	} while (num != 0);

	return (ptr);
}
