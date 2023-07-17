#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all alphapet letters lowercase then uppercas
 *
 * Return: 0 (success)
*/
int main(void)
{
	char alphapet = 'a';
	char ALPHAPET = 'A';

	/*print a - z*/
	while (alphapet <= 'z')
	{
		putchar(alphapet);
		alphapet++;
	}
	/*print A- Z*/
	while (ALPHAPET <= 'Z')
	{
		putchar(ALPHAPET);
		ALPHAPET++;
	}
	putchar('\n')

		return (0);
}
