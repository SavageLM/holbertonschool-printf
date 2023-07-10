#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * handle_percent-
 * @format: character string used to call correct function
 * Return: pc (print count)
 */

int helper_func(const char *format, va_list arg)
{
	int i = 0, pc = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			while (format[i] == ' ')
				i++;
			if (format[i] == '%')
				pc += _putchar(format[i]);
			if (format_checker(format[i], arg) == 0)
			{
				pc += _putchar('%');
				pc += _putchar(format[i]);
			}
			else
				format_checker(format[i], arg);
		}
		else 
			pc += _putchar(format[i]);
		i++;
	}
	return (pc);
}

int format_checker(char format, va_list arg)
{
		checker_t functions[] = {
		{"c", print_char},
		{"i", print_num},
		{"d", print_num},
		{"s", print_string},
		{NULL, NULL}
		};

		int i = 0, pc = 0;

		if (format == '%')
			return (1);
		while (functions[i].type)
		{
			if (format == *functions[i].type)
			{
				pc += functions[i].print(arg);
				return (pc);
			}
			i++;
		}
		return (0);
}

