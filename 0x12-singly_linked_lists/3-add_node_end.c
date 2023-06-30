#include "lists.h"

/**
 * _strlen - finds length of a string
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: pointer to a pointer to the first node
 * @str: pointer to a string
 *
 * Return: Address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	char *s = strdup(str);

	if (s == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = s;
	new_node->len = _strlen(s);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
