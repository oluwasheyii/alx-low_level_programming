#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from input to 98,
 * in order separated by a comma, followed by a space
 * @n: the number to begin the counting at
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
printf("\n");
break;
}
else
{
printf("%d, ", n);
}
}
}
}
