#include "main.h"

/**
 * _strncat - Concatenates 2 strings using an input number
 * of bytes from src.
 * @dest: String to be appended
 * @src: string to be appended to dest
 * @n: Number of bytes from src to be appended to dest.
 *
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
