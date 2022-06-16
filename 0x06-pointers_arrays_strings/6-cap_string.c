#include "main.h"

/**
 * cap_string - this function converts all letters
 * of a string to uppercase
 * @s: input the string
 * Return: pointer to dest
 */
char *cap_string(char *s)
{
	int index = 0;

	while (s[index])
	{
		while (!(s[index] >= 'a' && s[index] <= 'z'))
			index++

		if (s[index - 1] == ' ' ||
				s[index - 1] == '\t' ||
				s[index - 1] == '\n' ||
				s[index - 1] == ',' ||
				s[index - 1] == ';' ||
				s[index - 1] == '.' ||
				s[index - 1] == '!' ||
				s[index - 1] == '?' ||
				s[index - 1] == '"' ||
				s[index - 1] == '(' ||
				s[index - 1] == ')' ||
				s[index - 1] == '{' ||
				s[index - 1] == '}' ||
				index == 0)
				s[index] -= 32;

		index++;
	}

	return (s);
}
