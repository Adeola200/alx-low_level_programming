#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all possible different combinations of two digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j) || i == j)
			{
				putchar(i);
				putchar(j);
				if (i == '7' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;


	}
return (0);
}
