#include <stdio.h>
#include <stdlib.h>
/**
 * Description: Print aplhabet in lowercase
 */
int main(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
