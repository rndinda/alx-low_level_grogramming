#include "lists.h"

/**
 * sum_listint - calculates sum of data of list
 * @head: pointer to head of list
 *
 * Return: if list is empty - 0 otherwise sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
