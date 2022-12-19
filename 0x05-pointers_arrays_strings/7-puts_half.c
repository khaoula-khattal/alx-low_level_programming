#include "main.h"

/**
 * puts_half - print the second half of string
 * @str: The string
 * Return: function
 */

void puts_half(char *str)
{
	int index, hlf;

	index = 0;
	while (str[index] != '\0')
		index++;
	half = index / 2;
	if (index % 2 == 1)
		hlf++;
	while (half < index)
	{
		_putchar(str[half]);
		hlf++;
	}
	_putchar('\n');
}

