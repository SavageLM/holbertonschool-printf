#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * print_string - prints an input string
 * @arg: string to be printed
 * Return: Returns print length
 */

int print_string(va_list arg)
{
	char *str;
	int i = 0;
	
	str = va_arg(arg, char*);
	
	if (str != NULL)
	{
		while (str[i])
		{
			_putchar(str[i])
			i++;
		}
		
		return (i);
	}

	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	
	return (6);
}
