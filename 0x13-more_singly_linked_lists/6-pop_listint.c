#include "lists.h"

/**
 * pop_listint - deletes head of node
 * @head: Pointer to address of head
 *
 * Return: if list is empty - 0 otherwise head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
