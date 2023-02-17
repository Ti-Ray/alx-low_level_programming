#include <stdio.h>
/**
 * main -This is to print the lowercase alphabet in reverse
 *
 * Return: Return(0)
 */
int main(void)
{
	int A;

	for (A = 'z'; A >= 'a'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
