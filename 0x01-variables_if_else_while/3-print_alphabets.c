#include <stdio.h>

/**
 * main - Enty point
 *
 * Description: prirt alphabet in lowercase then in upper
 *
 * Return: Always 0 (success)
 **/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
