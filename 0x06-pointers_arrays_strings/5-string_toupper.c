#include "main.h"

/**
 * string_toupper - it changes lowercase to uppercase
 * of a string.
 * @s: the input string
 * Return: pointer to dest
 */
char *string_toupper(char *s)
{
	int num = 0;

	while (*(s + num) != '\0')
	{
		if ((*(s + num) >= 97) && (*(s + num) <= 122))
			*(s + num) = *(s + num) - 32;
		num++;
	}
	return (s);
}
