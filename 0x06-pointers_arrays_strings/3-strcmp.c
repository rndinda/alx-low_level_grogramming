#include "main.h"

/**
 * _strcmp - This function compares pointers of two strings.
 * @s1: pointer to the first string to be compared.
 * @s2: pointer to second str to be compared
 * Return: 0 if s1 and s2 are equals,
 * other numbers if otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
