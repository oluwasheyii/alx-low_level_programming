#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @str : string to be checked
 * Return The length of the @str.
 */
int _strlen(const char *str)
{
int length = 0;

while (*str++)
length++;
return (length);
}
