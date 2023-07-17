#include <stdio.h>
/**
 * main - entry point
 *
 * Discription: print all alphapet letters.
 *
 *Return: 0 (success)
*/
int main(void)
	char x = 'a';

	while (x <= 'z')
{
	putchar(x);
	x++;
}
putchar('\n');
return (0);
