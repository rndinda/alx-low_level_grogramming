#include "main.h"

/**
 * print_alphabets - Entry point
 * Description: the function prints out alphabets in lowercase
 * followed by a new line .
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
