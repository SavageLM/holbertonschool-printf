#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _printf- Function that will replicate the std printf function.
 * @format: Character string used to call correct function
 * @...: arguements passed into the function
 * Return: returns the number of printed characters
 */

int _printf(const char *format, ...)
{
	va_list args;
	checker_t functions[] = {
		{"c", print_char},
		{"i", print_num},
		{"d", print_num},
		{"s", print_string},
		{NULL, NULL}
	};
	unsigned int i = 0, j = 0, nump = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				nump += _putchar(format[i]);
			j = 0;
			while (functions[j].type != NULL)
			{
				if (format[i] == *functions[j].type)
				{
					nump += functions[j].print(args);
					break;
				}
				j++;
			}
			if (functions[j].type == NULL)
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			nump++;
		}
		i++;
	}
	va_end(args);
	return (nump);
}
