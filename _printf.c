#include "main.h"

/**
 * _printf - prints formatted output just like printf
 * @format: pointer to format character string
 *
 * Return: number of printed characters
 */
int _printf(char *format, ...)
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
			}
			else
			{
				/**
				 * the next line should be added after definning pformatted
				 * pformatted((format + i + 1), ap, buffer, &cursor);
				 */
			}
		}
		else
		{
			buffer[cursor] = *(format + i);
			cursor++;
		}
	}

	write(1, buffer, cursor);

	va_end(ap);
	return (cursor);
}
