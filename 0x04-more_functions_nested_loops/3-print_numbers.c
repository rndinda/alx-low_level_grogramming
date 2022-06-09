#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 and a new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
