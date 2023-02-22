#include <stdio.h>
#include "main.h"
/**
 * islower -This one displays one is c is lowercase
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{
    c = _islower('H');
    putchar(c + '0');
    c = _islower('o');
    putchar(c + '0');
    c = _islower(108);
    putchar(c + '0');
    putchar('\n');
    return (0);
}
