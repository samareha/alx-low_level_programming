#include "main.h"

/**
 * _puts - check the code
 * @str: char
 * Return: 0 (success)
*/
void _puts(char *str)
{
	while (*str != '\0')
		{
			_puts(*str + 0);
			str++;
		}
	_puts('\n');
}
