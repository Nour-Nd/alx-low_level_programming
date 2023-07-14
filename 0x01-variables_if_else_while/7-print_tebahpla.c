#include <stdio.h>

/**
 * main- The entry point
 *
 * Return: 0 (The program succeeded)
 */

int main(void)

{
char c;
for (c = 'z'; c >= 'a'; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
