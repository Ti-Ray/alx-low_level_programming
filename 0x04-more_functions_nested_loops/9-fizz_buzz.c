#include <stdio.h>
#include "main.h"
/**
 * main -This is to print all values from '1' to '100' with Fizz in place of multiples of three
 *
 * Return: Always 0
 */
int main(int i)
{
	for (i = 0; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar(' ');
		}
		else if ((i % 5) == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else if ((i % 5) == 0 && (i % 3) == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}
		else
		{
			putchar(i);
		}
	}
	return(0);
}
