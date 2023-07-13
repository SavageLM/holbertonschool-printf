#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char- Function that prints an input character
 * @arg: arguement to print
 * Return: Returns print length
 */

int print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);

	_putchar(letter);

	return (1);
}

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
		if (*str == '\0')
			return (-1);

		while (str[i])
		{
			_putchar(str[i]);
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
