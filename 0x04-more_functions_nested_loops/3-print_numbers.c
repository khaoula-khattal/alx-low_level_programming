#include "main.h"

/**
 * print_numbers - print from 1 to 9
 * Return: the list of numbers
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
	return (0);
}
