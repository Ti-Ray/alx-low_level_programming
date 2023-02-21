#define MAIN_H
#include <stdio.h>

/**
 * print_alphabet -This is the function to print the alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char try = 'a';

	while (try <= 'z')
	{
		putchar(try);
		try++;
	}
	putchar('\n');
}
