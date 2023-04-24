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
int pformatted(const char *format, va_list ap, char *buffer, int *cursor)
{
	int i, j;
	int nchar = 0;
	specifier arr[4] = {
		{'c', pchar},
		{'s', pstring},
		{'d', pdecimal},
		{'i', pdecimal}
	};

	for (i = 0; *(format + i) != '\0'; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (*(format + i) == arr[j].sp)
			{
				if (is_valid(format, i))
				{
					nchar = i;
					arr[j].f(format, ap, buffer, cursor);
					return (nchar);
				}
				*(buffer + *cursor) = '%';
				(*cursor)++;
				return (-1);
			}
		}
	}

	*(buffer + *cursor) = '%';
	(*cursor)++;
	return (-1);
}
