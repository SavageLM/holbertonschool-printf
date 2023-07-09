#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* List of prototypes and functions to use*/

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_num(va_list arg);
void recursenum(int n);
int handle_percent(const char *format, va_list arg);

/*Typedef and structure used*/
typedef struct checker
{
	char *type;
	int (*print)(va_list arg);
} checker_t;


#endif
