#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: Number of times the character '\' should be printed.
 *
 * Description: This function prints a diagonal line consisting of the
 * character '\' repeated 'n' times. If 'n' is 0 or less, the function
 * only prints a newline.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}

