#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - the name 
 * @name: name to prit
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
