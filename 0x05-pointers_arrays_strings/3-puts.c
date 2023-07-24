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
			printf(STDOUT_FILENO, str, 1);
			str++;
		}
	printf('\n');
}
