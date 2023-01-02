#include "main.h"

/**
 * *_strpbrk - matche character
 * @s: c string
 * @accept: char in s1 match in s2
 * Return: s
 **/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}
	return (0);
}
