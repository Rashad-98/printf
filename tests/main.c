#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	printf("%d\n", _printf("Negative:[%d]\n", -762534));
	printf("%d\n", printf("Negative:[%d]\n", -762534));

	_printf("%000000--j----+++++++4545.3455llc\n", 'x');

	_printf("%c, %c, %%c, %s, %jj%\n", 'x', 'x', "hello");
	_printf("%abfx\n");

	printf("%0000000000+++++++sfsda\n");
	_printf("%s\n");
	printf("%s\n");

	return (0);
}
