#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: Prints the lowercase alphabet, followed by a new line.
 *              Uses the _putchar function to print characters.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

