#include "lists.h"

/**
 * print_list - prints elements of a list_t
 * @h: the head of linked list
 * 
 * Return: The number of elements in h
 */

size_t print_list(const list_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		if (h->str ==NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (size);
}
