#include "main.h"

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	_putchar('a');
	_putchar('[');
	_putchar('2');
	_putchar(']');
	_putchar(' ');
	_putchar('=');
	_putchar(' ');
	_putchar('0' + a[2] / 1000 % 10);
	_putchar('0' + a[2] / 100 % 10);
	_putchar('0' + a[2] / 10 % 10);
	_putchar('0' + a[2] % 10);
	_putchar('\n');

	return (0);
}

