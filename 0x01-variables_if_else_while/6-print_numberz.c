#include <stdio.h>
/**
 * main -This is to print single digit numbers
 *
 * Return: Returns(0)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
