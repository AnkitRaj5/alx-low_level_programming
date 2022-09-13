#include <unistd.h>
/**
 * main - main block
 * Despcription: declaration a new function
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
