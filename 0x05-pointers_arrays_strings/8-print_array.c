#include "main.h"
#include <stdio.h>

/**
 * print_array - this function prints elements on an
 * integer array
 * @a: array
 * @n: the number of elements
 */
void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		if (y == 0)
			printf("%d", a[y]);
		else
			printf(", %d", a[y]);
	}
	printf("\n");
}
