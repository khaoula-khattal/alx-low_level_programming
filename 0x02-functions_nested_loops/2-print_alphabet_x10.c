#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return:0
 */
void print_alphabet_x10(void)
{
	char r, i;

	for (i = 0; i <= 9; i++)
	{
		for (r = 'a'; r <= 'z'; r++)
		{
			_putchar(r);
		}
		_putchar('\n');
	}
}
