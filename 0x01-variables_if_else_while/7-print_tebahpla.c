#include <stdio.h>
/**
 * main - Entry point
 *
 * return: o
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar (c);
	putchar ('\n');
	return (0);
}
