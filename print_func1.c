#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *letter;

	*letter = va_arg(arg, char);

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
		while (*str[i])
		{
			_putchar(*str);
			i++;
		}

		return (i);
	}

	_putchar('(');
	_putchar('N');
	_putchar('U');
	_putchar('L');
	_putchar('L');
	_putchar(')');

	return (6);
}

/**
 * print_percent- prints percent signs
 * @arg: input to print
 * Return: returns print count
 */

int print_percent(va_list arg)
{
	char *percent;
	int i = 0, c = 0;

	percent = va_arg(arg, int);

	while (percent[i])
	{
		if ((percent[i - 1] == "%") && (percent[i] == "%"))
			_putchar("%");
		if ((percent[i - 1] == "/") && (percent[i] == "%"))
			_putchar("%");
		c++;
	}

	return (c);
}
