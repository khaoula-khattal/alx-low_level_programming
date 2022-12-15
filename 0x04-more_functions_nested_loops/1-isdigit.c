#include "main.h"

/**
 *_isdigit - digit to check
 * @c: the dig to check
 * Return: 1 if it a digit 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
