#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of two
 * @a: second array
 * @size: number matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int s1, s2;

	s1 = 0;
	s2 = 0;

	i = 0;
	while (i < size)
	{
		s1 = s1 + *(a + i * size +i);
		s2 = s2 + *(a + i * size + size - i - 1);

		i++;
	}

	printf("%i, %i\n", s1, s2);
}
