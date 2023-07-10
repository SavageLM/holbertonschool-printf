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
	va_list arg;
	int nump = 0;

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	nump += handle_percent(format, arg);

	va_end(arg);

	return (nump);
}
