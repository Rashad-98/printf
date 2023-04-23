#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct specifier - hold a specifier with
 * its corresponding print function pointer
 * @sp: specifier
 * @f: corresponding print function
 */
typedef struct specifier
{
	char sp;
	void (*f)(char *format, va_list ap, char *buffer, int *cursor);
} specifier;

int _printf(char *format, ...);
int pformatted(char *format, va_list ap, char *buffer, int *cursor);

void pchar(char *format, va_list ap, char *buffer, int *cursor);
#endif
