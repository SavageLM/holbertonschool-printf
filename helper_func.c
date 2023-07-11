#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * helper_func- Function for parsing through variable format
 * @arg: string to be printed
 * @format: character string used to call correct function
 * Return: pc (print count)
 */

int helper_func(const char *format, va_list arg)
{
	int i = 0, d = 0, pc = 0;

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
				_putchar(format[i]);
			d = format_checker(format[i], arg);
			if (d == 0)
			{
				pc += _putchar('%');
				pc += _putchar(format[i]);
			}
			pc += d;
		}
		else
			pc += _putchar(format[i]);
		i++;
	}
	return (pc);
}

/**
 * format_checker - checks value against structure and calls
 * matching function
 * @arg: string to be printed
 * @format: character passed by helper_func
 * Return: 0
 */

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
