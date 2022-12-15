#include "main.h"
int _putchar(char c);

/**
 * print_numbers - print from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
