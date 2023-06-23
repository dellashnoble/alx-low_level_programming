#include "main.h"

/**
 * print_triangle - Prints a triangle in the terminal.
 * @size: Size of the triangle.
 *
 * Description: This function prints a triangle of size using the character '#'
 * If 'size' is 0 or less, the function prints only a newline.
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

		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

