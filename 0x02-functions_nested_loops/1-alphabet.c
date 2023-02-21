#define MAIN_H
#include <stdio.h>

/**
 * print_alphabet -This is the function to print the alphabet
 *
 * Return: Always 0 (success)
 */

/**
 * main -This is to print out the alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char try = 'a';

	while (try < 'z')
	{
		putchar(try);
		try++;
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
