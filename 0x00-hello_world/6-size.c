#include <stdio.h>
int main (void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %d\n",sizeof(a));
	printf("Size of an int: %d\n",sizeof(b));
	printf("Size of a long int: %d\n",sizeof(c));
	printf("Size of a long long int: %d\n",sizeof(d));
	printf("Size of a float: %d\n",sizeof(e));
	return (0);
}
