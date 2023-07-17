#include <stdio.h>
/**
  *main - prints all single digits
  *Return: 0
*/
int main(void)
{
	int num;
	num = 0;
       	while (num <= 9)

       	{
	       	putchar("%i", num);
		num++;
	}

	putchar('\n');
	return (0);
}
