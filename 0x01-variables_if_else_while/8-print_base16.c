#include <stdio.h>
/**
 * main - entry point
 *
 * Return:0
 */
int main(void)
{
	int n;

	char a;

	a = 'a';
	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
