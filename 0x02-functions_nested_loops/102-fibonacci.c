#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1, fib2 = 2, fib_next;

	_putchar(fib1 + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(fib2 + '0');

	for (i = 3; i <= 50; i++)
	{
		fib_next = fib1 + fib2;

		if (i != 50)
		{
			_putchar(',');
			_putchar(' ');
		}

		_putchar(fib_next + '0');

		fib1 = fib2;
		fib2 = fib_next;
	}

	_putchar('\n');

	return (0);
}

