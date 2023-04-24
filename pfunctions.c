#include "main.h"

/**
 * pchar - adds a character to buffer
 * @format: pointer to format character string
 * @ap: va_list type holding additional arguments to _printf
 * @buffer: pointer to buffer to add character to
 * @cursor: pointer to index of buffer to add character to
 */
void pchar(const char *format, va_list ap, char *buffer, int *cursor)
{
	char c = (char)va_arg(ap, int);

	if (format == NULL)
		return;

	*(buffer + *cursor) = c;
	(*cursor)++;
}

/**
 * pstring - adds a character string to buffer
 * @format: pointer to format character string
 * @ap: va_list type holding additional arguments to _printf
 * @buffer: pointer to buffer to add string to
 * @cursor: pointer to index of buffer to add string to
 */
void pstring(const char *format, va_list ap, char *buffer, int *cursor)
{
	int i;
	va_list ap1;
	char *str;

	va_copy(ap1, ap);
	str = va_arg(ap, char *);

	if (format == NULL)
		return;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(buffer + *cursor) = *(str + i);
		(*cursor)++;
	}
}

/**
 * pdecimal - prints decimal number
 * @format: pointer to format character string
 * @ap: va_list type holding additional srguments to _printf
 * @buffer: pointer to buffer to add decimal to
 * @cursor: pointer to index of buffer to add string to
 */
void pdecimal(const char *format, va_list ap, char *buffer, int *cursor)
{
	int i;
	char *str;
	int num = va_arg(ap, int);

	printf("%d\n", num);

	if (format == NULL)
		return;

	str = num_to_str(num);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(buffer + *cursor) = *(str + i);
		(*cursor)++;
	}

	free(str);
}
