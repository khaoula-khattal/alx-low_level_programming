#include "main.h"

/**
 * print_last_digit - Print tha last digit in a number
 * @n: the number
 * Return: the last number
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;
	l = n % 10;
	_putchar(l + '0');
	return (l);
}
