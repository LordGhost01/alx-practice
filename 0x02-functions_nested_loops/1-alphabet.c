#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase
 *
 * return: void
 */
void print_alphabet(void)
{
	int c;
	
	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
