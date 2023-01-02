#include "main.h"

/**
 * *_strchr - Locate a char
 * @s: string
 * @c: char
 * Return: pointer
 **/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
