#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 0 - 9 using putchar
 *              while using int variable
 * Return: 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n <= 0)
	{
		/*convert digit to ASCII representation*/
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
