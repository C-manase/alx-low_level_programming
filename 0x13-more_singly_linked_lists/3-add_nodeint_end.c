#include "lists.h"

/**
 * add_nodeint_end - adds anew node at the end of a list
 * @head: pointer to a pointer of the first node
 * @n: node to be added
 *
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;

	return (new);
}
