#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of the list
 * @head: pointer to address of head of list
 * @n: Interger for new node
 *
 * Return: If function fails - NULL otherwise the address of new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
