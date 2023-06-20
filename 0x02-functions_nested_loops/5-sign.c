#include "main.h"
/**
 * print_sign - fuction to check for the sign of a number
 * @n: is the int that will be used in arguing the fuction
 * Return: (0)
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
