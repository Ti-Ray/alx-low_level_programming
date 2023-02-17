#include <stdio.h>
/**
 * main -This is for printing numbers
 *
 * Return: Return(0)
 */
int main(void)
{
	int a, b;
	char r = ', ';
	char k = '$';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a < '9');
		{
			putchar(r);
		}
		if (a >= '9');
		{
			putchar(k);
		}
	}
	putchar('\n');
	return (0);
}
