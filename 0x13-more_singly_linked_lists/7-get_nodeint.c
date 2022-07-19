#include "lists.h"

/**
 * get_nodeint_at_index - locates a node in a list
 * @head: pointer to head of list
 * @index: index of node to be located
 *
 * Return: if no node -NULL otherwise the found node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
