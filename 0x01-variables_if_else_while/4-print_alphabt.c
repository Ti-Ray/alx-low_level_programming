#include <stdio.h>
/**
 * main -This is to avoid letter q and e
 *
 * Return: Return(0)
 */
int main(void)
{
	int A;

	for (A = 'a'; A <= 'z'; A++)
	{
		if (A != 'e' && A != 'q')
		{
			putchar(A);
		}
	}
	putchar('\n');
	return (0);
}
