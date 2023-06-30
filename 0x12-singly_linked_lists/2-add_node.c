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
 * add_node - Adds a new node at the beginning of a list
 * @head: pointer to a pointer of the first node
 * @str: pointer to a string
 *
 * Return: Address of a new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *s = strdup(str);

	if (s == NULL || s == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = s;
	new_node->len = _strlen(s);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
