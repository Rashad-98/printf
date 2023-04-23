#include "main.h"

/**
 * pchar - prints a character
 * @format: pointer to format character string
 * @ap: va_list type holding additional arguments to _printf
 * @buffer: pointer to buffer to add character to
 * @cursor: pointer to index of buffer to add character to
 */
void pchar(char *format, va_list ap, char *buffer, int *cursor)
{
	char c = (char)va_arg(ap, int);

	if (format == NULL)
		return;

	*(buffer + *cursor) = c;
	(*cursor)++;
}
