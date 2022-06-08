#include "main.h"

/**
 *print_alphabets - Entry point
 *Description: the function prints out alphabets in lowercases.
 *Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
