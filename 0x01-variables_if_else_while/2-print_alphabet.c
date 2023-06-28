#include <stdio.h>
/**
*main - Entry point
*description: 'print alphabetic lowercase'
*return: 0(valid)
*/
int main(void)
{
	int n = 97;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	
	return (0);
}
