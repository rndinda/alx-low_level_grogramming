#include "main.h"

/**
 * _isalpha - Itr checks for alphabets
 * @c: the integer value it receives.
 * Return: 1 if the value is an alphabet and 0 if otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
