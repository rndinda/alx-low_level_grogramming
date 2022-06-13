#include "main.h"

/**
 * _strcpy - this function duplicates a string pointed by @src
 * to a buffer pointed by @dest
 * @src: the source for the string to copy
 * @dest: the buffer that copies the dtring.
 *
 * Return: pointer to destinantion of string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
