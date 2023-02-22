#include "main.h"
/**
 * _abs -This is to check for absolute vaules
 * 
 * Return: Always 0 (success)
 */
int _abs(int m)
{
	if (m > 0)
	{
		return (m);
	}
	else if (m < 0)
	{
		return (-m);
	}
	else
	{
		return (m);
	}
	return (0);
}
