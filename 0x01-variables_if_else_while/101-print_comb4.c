#include <stdio.h>

/**
 * main - Prints all possible different combinations of four digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				for (l = k + 1; l <= 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					putchar('0' + l);

					if (i != 6 || j != 7 || k != 8 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
