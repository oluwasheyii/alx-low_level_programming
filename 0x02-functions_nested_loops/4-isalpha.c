#include "main.h"
/**
 * -isalpha - checking if c is a letter in lowercase or uppercase
 * @c: the int that will be used for arguing the fuction 
 * Return: (0)
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
