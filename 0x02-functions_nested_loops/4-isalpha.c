#include "main.h"

/**
 * _isalpha - check the alpha
 * @c: character
 * Return:1 if is a letter 0 if not
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
