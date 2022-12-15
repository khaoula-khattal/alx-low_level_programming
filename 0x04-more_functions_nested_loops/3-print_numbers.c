#include "main.h"

/**
 * print_numbers - print from 1 to 9
 * Return: the list of numbers
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
