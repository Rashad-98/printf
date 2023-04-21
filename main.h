#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(char *format, ...);
void pformatted(char *format, va_list ap, char *buffer, int *cursor);
#endif
