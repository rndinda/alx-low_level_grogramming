#include "main.h"

/**
 * print_diagonal - this function draws a diagonal line
 * @n: The length of the line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
