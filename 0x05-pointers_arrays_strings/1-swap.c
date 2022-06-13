#include "main.h"

/**
 * swap_int - swaps the value of int a with int b
 * @a: first to swap
 * @b: second to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
