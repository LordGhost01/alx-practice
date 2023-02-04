#include <stdio.h>
/**
 * main - Entry point
 *
 * return: 0
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; a <= 8; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a != b && a != c && a != d && b != c && b != d && c != d)
					{
						putchar (a + '0');
						putchar (b + '0');
						putchar (' ');
						putchar (c + '0');
						putchar (d + '0');
						if (b != d)
						{
							putchar ('.');
							putchar (' ');
						}
					}
				}
			}
		}
	}
	putchar ('\n');
	return 0;
}

