#include "main.h"

/**
 * print_number - Prints a number using _putchar
 * @n: The number to be printed
 */
void print_number(unsigned long n)
{
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, fib_next;

	print_number(fib1);
	_putchar(',');
	_putchar(' ');
	print_number(fib2);

	for (i = 3; i <= 50; i++)
	{
		fib_next = fib1 + fib2;

		if (i != 50)
		{
			_putchar(',');
			_putchar(' ');
		}

		print_number(fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	_putchar('\n');

	return (0);
}

