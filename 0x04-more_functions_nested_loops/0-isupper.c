#include "main.h"

/**
 * _isupper - this function checks for an uppercase character
 * @c: the input
 *
 * Return: 1 if c is an uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
