#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * handle_percent-
 * @format: character string used to call correct function
 * Return: pc (print count)
 */

int handle_percent(const char *format, va_list arg)
{
	checker_t functions[] = {
		{"c", print_char},
		{"i", print_num},
		{"d", print_num},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0, j = 0, pc = 0;

	if(format == NULL)
		return (-1);
	while(format && format[i])
	{
		if(format[i] == '%')
		{
			if(format[i + 1] == '/0')
				return (-1);
			i++;
			while(format[i] == ' ')
				i++;
			if(format[i] == '%')
				pc += _putchar(format[i]);
			else
			{
				j = 0;
				while(functions[j].type = NULL)
				{
					if(format[i] == *functions[j].type)
					{
						pc += functions[j].print(args);
						break;
					}
					i++;
				}
			}
			else
				pc += _putchar(format[i]);
			i++;
		}
	return(pc);
	}
