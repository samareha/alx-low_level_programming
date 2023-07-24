#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - check the code
 * @s: string
 * Return: Always 0.
*/
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;

	return (counter);
}
