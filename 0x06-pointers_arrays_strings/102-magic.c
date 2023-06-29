#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/* write your line of code here... */
	*(&n + 12) = 98; /* Address arithmetic: n + 12 = &a[2] */
	/*******************************/

	printf("a[2] = %d\n", a[2]);
	return (0);
}

