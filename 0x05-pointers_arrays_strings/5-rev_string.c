#include "main.h"

/**
 * reverse_string - Reverses a string.
 * @s: The string to reverse.
 */
void reverse_string(char *s)
{
	int start = 0;
	int end = 0;
	char temp;

	/* Find the end of the string */
	while (s[end] != '\0')
		end++;

	end--;

	/* Reverse the string */
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}

