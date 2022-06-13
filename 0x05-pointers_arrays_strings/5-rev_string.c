#include "main.h"

/**
 * rev_string - this function reverses a string.
 * @s: the string to be reversed.
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char thc;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		thc = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = thc;
	}
}
