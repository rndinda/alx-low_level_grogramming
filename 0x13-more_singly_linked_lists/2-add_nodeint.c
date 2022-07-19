#include "lists.h"

/**
 * add_nodeint - Adds node at the beginning of list
 * @head: Pointer to address the head oflist
 * @n: integer for the new node
 *
 * Return: if function fails - NULL otherwise address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
