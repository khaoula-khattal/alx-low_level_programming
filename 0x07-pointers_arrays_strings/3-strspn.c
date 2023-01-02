#include "main.h"

/**
 * _strspn - LOcate a char
 * @s: to be scanned
 * @accept: match in s
 * Return: count
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;
	char *s1, *s2;

	s1 = s;
	s2 = accept;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
		{
			count++;
			break;
		}
		j++;
		}
	if (s[i] != accept[j])
	{
		break;
	}
	i++;
	}
return (count);
}
