#include <stdio.h>
/**
 * main - Entry point
 *
 * return: o
 */

int main(void)
{
	int num1;
	int num2 = 1;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 1; num2 <=9; num2++)
		{
			if ((num1 != num2) && (num1 < num2))
			{
				 putchar (num1 + '0');
				 putchar (num2 + '0');
					 if ((num1 == 8) && (num2 == 9))
						 ;
					 else
					 {
						 putchar (',');
						 putchar (' ');
					 }
			}
		}
	}
	putchar ('\n');
	return 0;
}
