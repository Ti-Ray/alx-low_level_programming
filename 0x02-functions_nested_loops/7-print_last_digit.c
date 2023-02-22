#include "main.h"
/**
 * print_last_digit -This is to print the last digit of a number
 * @v: This is the var for the last number
 * Return: Always 0 (success)
 */
int print_last_digit(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
