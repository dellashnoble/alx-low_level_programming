#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Description: Prints the multiplication table for the numbers 0 to 9.
 *              Each row represents a number and its multiples up to 9.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result < 10)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}

		_putchar('\n');
	}
}

