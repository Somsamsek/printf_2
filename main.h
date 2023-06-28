#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct options - struct containing option to "turn on"
 * when an option is  specified then passed to _printf()
 * @add: flag for the '+' character
 * @spaces: flag for the ' ' character
 * @tag: flag for the '#' character
 */

typedef struct options
{
	int add;
	int spaces;
	int tag;
} options;

/**
 * struct handle - struct to choose the appropriate function depending
 * on the format specifier passed to _printf()
 * @g: format specifier
 * @p: pointer to printing function
 */
typedef struct handle
{
	char g;
	int (*p)(va_list ap, options *p);
} handle;

/* Prototypes of relevant functions used */
int _integers(va_list a, options *p);
void prnt_nums(int n);
int _unsigned_int(va_list a, options *p);
int cnt_nums(int i);
int _hexadec(va_list a, options *p);
int _hexbig(va_list a, options *p);
int _binary(va_list a, options *p);
int _octal(va_list a, options *p);
char *cnvrt(unsigned long int num, int bs, int lwrcs);
int _printf(const char *format, ...);
int (*get_prnt(char g))(va_list, options *);
int get_option(char g, options *p);
int _string(va_list a, options *p);
int _char(va_list a, options *p);
int _putchar(char c);
int _put(char *sr);
int _rot13(va_list a, options *p);
int _rev(va_list a, options *p);
int _bigS(va_list a, options *p);
int _address(va_list a, options *p);
int _percent(va_list a, options *p);

#endif /* MAIN_H */
