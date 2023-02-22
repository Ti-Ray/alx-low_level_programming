#include "main.h"
/**
 * _islower -This one displays one is c is lowercase
 *@c: is passed as the holder of the variable
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
