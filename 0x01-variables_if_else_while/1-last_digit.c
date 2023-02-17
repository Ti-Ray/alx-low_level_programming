#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -This is to display last number
 *
 * Return: Return(0)
 */
int main(void)
{
	int n, final_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	final_digit = n % 10;
	if (final_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, final_digit);
	}
	else if (final_digit == 0)
	{
		printf("Last digit of %d is %d and is 0", n, final_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, final_digit);
	}
	return (0);
}
