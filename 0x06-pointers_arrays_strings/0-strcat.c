#include "main.h"

/**
 * _strcat - this function concatenates a string.
 *  @dest: The pointer to the string to be concatenated.
 *  @src: the source string to be appended to @dest.
 *
 *  Return: The pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
