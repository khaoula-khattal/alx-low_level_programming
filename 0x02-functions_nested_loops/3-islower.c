#include "main.h"

/**
 * _islower - entry
 * @c: character
 * Return: 1 if letter is lowcase , 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
