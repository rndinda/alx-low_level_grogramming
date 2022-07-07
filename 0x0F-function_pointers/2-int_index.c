#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: integer array
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: index of the first element for which the cmp
 * function does not return 0.
 * return -1, if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; 1++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
