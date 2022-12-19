#include "main.h"

/**
 * rev_string - reserve string
 * @s: pointer to string
 * Return: function
 */

void rev_string(char *s)
{
	int a, b, k, t;

	a = 0;
	k = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	b = a - 1;
	while (k < b)
	{
		t = s[k];
		s[k] = s[b];
		s[b] = t;
		k++;
		b--;
	}
}
