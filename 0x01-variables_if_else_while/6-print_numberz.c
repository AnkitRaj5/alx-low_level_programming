#include <stdio.h>
/**
 * main - main block
 * Description: print all single digit 0 to 10
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
