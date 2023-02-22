#include "main.h"
/**
 * _abs -This is to check for absolute vaules
 * @m: This is the variable holding the function number
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
