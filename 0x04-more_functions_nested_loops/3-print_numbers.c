#include "main.h"

/**
 * print_numbers - print out 0 to 9 and a newline
 *
 * Return: void
 */
void print_numbers(void)
{
	char b = 0;

	while (b <= 9)
	{
		_putchar(b + '0');
		b++;
	}
	_putchar('\n');
}
