#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers in base 10, starting from 0,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}

