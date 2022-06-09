#include "main.h"

/**
 * more_numbers - this function prints 10 times the numbers from 0 to 14
 * 
 * Return: void
 */
void more_numbers(void)
{
	int b, c;

	for (c = 0; c < 10; c++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
