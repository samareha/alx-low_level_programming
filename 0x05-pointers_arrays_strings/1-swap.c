#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: integer
 * @b: integar
 * @x: integar
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
