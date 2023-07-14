#include <stdio.h>

/**
 * main- The entry point
 *
 * Return: 0 (The program succeeded)
 */

int main(void)

{
int k;
char c;
for (k = 0; k < 10; k++)
{
	putchar((k % 10) + '0');
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
