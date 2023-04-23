#include "main.h"

/**
 * pformatted - add formatted value to buffer
 * @format: pointer to format character string
 * @ap: va_list type that holds arguments from _printf
 * @buffer: pointer to buffer
 * @cursor: pointer to index in buffer
 *
 * Return: number of charcters in the format string after
 * the modulo operator
 */
int pformatted(char *format, va_list ap, char *buffer, int *cursor)
{
	int i, j;
	int nchar = 0;
	specifier arr[1] = {
		{'c', pchar}
	};

	for (i = 0; *(format + i) != '\0'; i++)
	{
		for (j = 0; j < 16; j++)
		{
			if (*(format + i) == arr[j].sp)
			{
				nchar = i;
				arr[j].f(format, ap, buffer, cursor);
				return (nchar);
			}
		}
	}

	return (nchar);
}
