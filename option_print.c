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
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
