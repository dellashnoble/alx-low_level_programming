#include "main.h"

/**
 * print_sum - Prints the sum of multiples of 3 or 5 below 1024
 *
 * @sum: The sum to be printed
 */
void print_sum(int sum)
{
	if (sum == 0)
	{
		_putchar('0');
	}
	else
	{
		int digits = 0;
		int temp = sum;

		/* Count the number of digits in the sum */
		while (temp != 0)
		{
			digits++;
			temp /= 10;
		}

		/* Extract and print each digit */
		while (digits > 0)
		{
			int divisor = 1;
			int j;

		/* Calculate the divisor based on the number of digits */
			for (j = 1; j < digits; j++)
				divisor *= 10;

			_putchar((sum / divisor) + '0');
			sum %= divisor;
			digits--;
		}
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	print_sum(sum);
	_putchar('\n');

	return (0);
}

