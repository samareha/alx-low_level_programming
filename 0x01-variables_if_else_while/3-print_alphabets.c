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
	char ch = 'a';
	char CH = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*print A- Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n')

		return (0);
}
