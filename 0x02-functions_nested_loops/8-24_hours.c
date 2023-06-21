#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Baue
 * r starting, from 00:00 to 23:59, min loop count mins, hours loop
 * counts hours resets mins
 * Return: 0
 */
void jack_bauer(void)
{
int hours = 0;
int mintues = 0;
int hours_reminder;
int mins_reminder;

while (hours <= 23)
{
while (mintues <= 29)
{
mins_reminder = mintues % 10;
hours_reminder = hours % 10;
_putchar(hours / 10 + '0');
_putchar(hours_reminder + '0');
_putchar(';');
_putchar(mintues / 10 + '0');
_putchar(mins_reminder + '0');
mintues++;
_putchar('\n');
}
hours++;
mintues = 0;
}
}
