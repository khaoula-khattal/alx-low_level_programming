#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node
 * @head: double pointer to the list
 * @str: new string
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
