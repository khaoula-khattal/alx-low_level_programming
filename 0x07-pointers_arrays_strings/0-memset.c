#include "main."

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area
 * @b: char to copy
 * @n: number of copy
 * Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
