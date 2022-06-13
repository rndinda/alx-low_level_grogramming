#include "main.h"

/**
 * puts2 - this function prints one of two characters
 * of a string
 * @str: The string with the characters
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i +=2)
		_putchar(str[i]);

	_putchar('\n');
}
