#include "main.h"

/**
 * _printf - prints formatted output just like printf
 * @format: pointer to format character string
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char buffer[1024];
	int i, cursor;

	va_start(ap, format);

	cursor = 0;
	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			if (*(format + i + 1) == '%')
			{
				buffer[cursor] = '%';
				cursor++;
				i++;
			}
			else
			{
				i += pformatted((format + i + 1), ap, buffer, &cursor) + 1;
			}
		}
		else
		{
			buffer[cursor] = *(format + i);
			cursor++;
		}
	}
	buffer[cursor] = '\0';

	write(1, buffer, cursor);

	va_end(ap);
	return (cursor);
}
