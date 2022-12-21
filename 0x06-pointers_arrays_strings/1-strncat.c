#include "main.h"

/**
 * _strncat - concatenates rwo string
 * @dest: first
 * @src: second
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a++])
	{
		b++;
	}
	for (a = 0; a < n && src[a]; a++)
	{
		dest[b] = scr[a];
	}
	return (dest);
}
