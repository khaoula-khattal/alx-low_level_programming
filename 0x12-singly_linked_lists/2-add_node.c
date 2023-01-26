#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node
 * @head: double pointer to the list
 * @str: new string
 * Return: the address of the new element or NULL if it fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new
		return (*head);
}
