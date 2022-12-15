#include "main.h"
int _putchar(char c);

/**
 * print_most_numbers - from 0 to 9
 * no 2 no 4
 * Return: no
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
