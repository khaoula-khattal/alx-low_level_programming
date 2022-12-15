#include "main.h"

/**
 * print_line - prints straight line n times
 * @n: how much time print it
 * Return: straight line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
