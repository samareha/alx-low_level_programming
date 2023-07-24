#include "main.h"
#include <unistd.h>

/**
 * _puts - check the code
 * @str: char
 * Return: 0 (success)
*/
void _puts(char *str)
{
	while (*str != '\0')
		{
			write(*str + 0);
			str++;
		}
	write('\n');
}
