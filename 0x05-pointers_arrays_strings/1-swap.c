#include "main.h"

/**
 * swap_int - switch 2 integer
 * @a: first one
 * @b: second one
 * Return: No
 */

void swap_int(int *a, int *b)
{
	int *tr;

	*tr = *a;
	*a = *b;
	*b = *tr;
}
