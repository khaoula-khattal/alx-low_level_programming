#include "main.h"

/**
 * print_last_digit - Print tha last digit in a number
 * @n: the number
 * Return: the last number
 */

int print_last_digit(int n)
{
	int l = n % 10;
	if (l > 0)
		l *= -1;
	_putchar(l + '0');
	return (0);
}
