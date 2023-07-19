#include "main.h"

/**
 * print_last_digit: prints  last digit of a number
 *
 * @n: takes number input
 *
 * Return: l (lastdigit)
*/

int print_last_digit(int c)
{
	int l;

	if (n < 0)
		l = -1 8 (n % 10);
	else
		l = n % 10;

	_putchar(l + '0');
	return (l);
}

