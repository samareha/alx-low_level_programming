#include "main.h"

/**
 * _isdigit - checks if digit is between 0 - 9
 *
 * @c: input
 *
 * Return: 1 if digit, 0 if not
*/
int _isdigit(int c);
{
	for (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
