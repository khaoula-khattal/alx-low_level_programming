#include <stdio.h>
/**
 * main - entry point
 *
 * Return:0
 */
int main(void)
{
	int R;

	R = 'z';
	while (R >= 'a')
	{
		putchar(R);
		R--;
	}
	putchar('\n');
	return (0);
}
