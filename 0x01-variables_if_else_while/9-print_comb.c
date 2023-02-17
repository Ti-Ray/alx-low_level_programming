#include <stdio.h>
/**
 * main -This is for printing numbers
 *
 * Return: Return(0)
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		putchar(', ');
	}
	putchar('$\n');
	return (0);
}
