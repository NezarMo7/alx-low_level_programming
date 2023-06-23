#include "main.h"

/**
 * Check if numbers are 0 - 9
 *
 * Return: 0 or 1
 */

int_isdigit(int c)
{
	if (c >='0' && c <='9')
		return (1);
	else
		return (0);
}
