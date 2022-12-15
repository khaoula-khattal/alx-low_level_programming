#include "main.h"

/**
 * print_numbers - print from 1 to 9
 * Return: the list of numbers
 */

void print_numbers(void)
{
	char i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
