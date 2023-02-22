#include "main.h"
/**
 * print_last_digit -This is to print the last digit of a number
 * @v: This is the var for the last number
 * Return: Always 0 (success)
 */
int print_last_digit(int num)
{
	_putchar('0' + _abs(num % 10));
	return (_abs(num % 10));
}
