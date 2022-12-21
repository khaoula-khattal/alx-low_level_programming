#include "main.h"

/**
 * reverse_array - reserve an aray of integer
 * @a: array to reserve
 * @n: number of element
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
	t = a[i];
	a[i] = a[j];
	a[j--] = t;
	}
}
