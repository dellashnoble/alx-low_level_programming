#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size.
 * @size: Size of the triangle.
 *
 * Description: Prints a triangle of size 'size' using the character '#'.
 * If 'size' is 0 or less, it prints only a newline.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

