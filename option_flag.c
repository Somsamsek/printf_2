#include "main.h"

/**
 * get_option - turns on flags if _printf finds any
 * @g: character that holds the flag specifier
 * @p: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 for success, 0 otherwise
 */

int get_option(char g, options *p)
{
int j = 0;
switch (g)
{
case '+':
p->add = 1;
j = 1;
break;
case ' ':
p->spaces = 1;
j = 1;
break;
case '#':
p->tag = 1;
j = 1;
break;
}
return (j);
}
