#include <stdio.h>

/**
 * main - Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqurstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 56; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
