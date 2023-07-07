#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>

/* List of prototypes and functions to use*/

int _printf(const char *format, ...);
int _putchar(char c);
void print_char(va_list arg);
void print_string(char *str);

/*Typedef and structure used*/
typedef struct checker
{
	char *type;
	void (*(print)(va_list arg));
}checker_t;


#endif
