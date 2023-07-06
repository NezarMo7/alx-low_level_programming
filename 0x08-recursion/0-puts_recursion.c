#include "main.h"

/**
 * puts recursion - print a string, followed by a new line
 * 0s: pointer to the string
 * return: void
**/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
