#include "main.h"

/**
 * string_length - Computes the length of a string.
 * @str: The string to compute the length of.
 *
 * Return: The length of the string.
 *
 * Description: This function takes a string as a parameter and computes
 * the length of the string by iterating through it until the null character
 * ('\0') is encountered.
 */
int string_length(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return length;
}

