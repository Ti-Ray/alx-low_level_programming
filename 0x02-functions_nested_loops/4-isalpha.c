#include "main.h"
#include <stdio.h>
/**
 * _isalpha - This is to print 1110
 *
 * Return: Always 0 (sucess)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
