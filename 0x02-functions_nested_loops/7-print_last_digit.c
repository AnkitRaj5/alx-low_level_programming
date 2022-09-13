#include "main.h"
/**
 * print_last_digit - return last digit
 * @n: paramete
 * Return: 0 or 1
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = nv % 10;
	_putchar(nv + '0');
	return (nv);
}
