#include <stdio.h>
/**
 * main -This is to avoid letter q and e
 *
 * Return: Return(0)
 */
int main(void)
{
	int A;

	for (A = 'a'; A < 'e'; A < 'q'; A <= 'z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
