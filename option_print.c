#include "main.h"

/**
 * get_prnt - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @g: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_array[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the appropriate
 * printing function
 * Return: a pointer to the matching printing function
 */

int (*get_prnt(char g))(va_list, options *)
{
	ph func_array[] = {
		{'i', _integers},
		{'s', _string},
		{'c', _char},
		{'d', _integers},
		{'u', _unsigned},
		{'x', _hexadec},
		{'X', _hexbig},
		{'b', _binary},
		{'o', _octal},
		{'R', _rot13},
		{'r', _rev},
		{'S', _bigS},
		{'p', _address},
		{'%', _percent}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_array[i].c == s)
			return (func_array[i].f);
	return (NULL);
}
