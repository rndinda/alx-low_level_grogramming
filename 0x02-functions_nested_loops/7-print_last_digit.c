#include "main.h"

/**
 * print_last_digit - Prints the last digit of a given number
 * @n: is the integer
 * Description: prints the last digit
 * Return: interger
 */
int print_last_digit(int n)
{
	int lastnumber = n % 10;

	if (n < 0)
	{
		lastnumber = lastnumber * -1;
	}
	_putchar(lastnumber + '0');
	return (lastnumber);
}
