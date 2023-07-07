#include "main.h"

/**
 * _strer_recursior - returns the length of string
 * @s: pointer the string
 * return: int
**/

int _strlen_recursion(char *s)
{
int ntr = 0;

if (*s > '\0')
{
	ntr += _strlen_recursion(s + 1) + 1;
}

return (ntr);
}
