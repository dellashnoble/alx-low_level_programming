#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 *
 * @n: The number of times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int i, j, result;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result <= 9)
				print_single_digit(result);
			else if (result <= 99)
				print_two_digits(result);
			else
				print_three_digits(result);
		}

		_putchar('\n');
	}
}

/**
 * print_single_digit - Prints a single-digit number
 *
 * @n: The number to print
 *
 * Return: void
 */
void print_single_digit(int n)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(n + '0');
}

/**
 * print_two_digits - Prints a two-digit number
 *
 * @n: The number to print
 *
 * Return: void
 */
void print_two_digits(int n)
{
	_putchar(' ');
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}

/**
 * print_three_digits - Prints a three-digit number
 *
 * @n: The number to print
 *
 * Return: void
 */
void print_three_digits(int n)
{
	_putchar((n / 100) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}

