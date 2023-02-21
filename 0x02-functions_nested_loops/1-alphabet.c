#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char try = 'a';

	while (try < 'z')
	{
		_putchar(try);
		try++;
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
