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
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = scr[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
