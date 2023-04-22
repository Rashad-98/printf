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
	specifier arr[16] = {
		{c, pchar},
		{d, pdecimal},
		{i, pdecimal},
		{'', NULL},
		{'', NULL},
		{'', NULL},
		{'', NULL},
		{'', NULL},
		{'', NULL},
		{'', NULL},
		{'', NULL},
		{'', NULL},
		{'', NULL},
		{'', NULL},
		{'', NULL}
		{'', NULL}
	}
}
