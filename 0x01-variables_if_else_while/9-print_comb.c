#include <stdio.h>

/**
 * main- The entry point
 *
 * Return: 0 (The program succeeded)
 */

int main(void)

{
int k;
for (k = 0; k <= 9; k++)
{
	putchar((k % 10) + '0');
	if (k == 9)
	{
	continue;
	}
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
