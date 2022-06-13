#include "main.h"

/**
 * _strlen - a function that returns the length of string
 * @s: the input string
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
