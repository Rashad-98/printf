#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
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
	void (*f)(const char *format, va_list ap, char *buffer, int *cursor);
} specifier;

int _printf(const char *format, ...);
int pformatted(const char *format, va_list ap, char *buffer, int *cursor);

void pchar(const char *format, va_list ap, char *buffer, int *cursor);
void pstring(const char *format, va_list ap, char *buffer, int *cursor);
void pdecimal(const char *format, va_list ap, char *buffer, int *cursor);

int find(char c, char *arr, int size);
int is_valid(const char *format, int i);
char *num_to_str(int num);
int _pow(int num, int exp);
#endif
