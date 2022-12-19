#include "main.h"

/**
 * print_rev - print a string
 * @s: string
 * Return: the strin
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
}
