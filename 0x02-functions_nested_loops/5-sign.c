#include "main.h"

/**
 * print_sign -This is to print + for greater than zero
 * @n: is the variable holder
 * Return: Always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar(',');
		putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		putchar(',');
		putchar(' ');
		return (-1);
	}
}
