#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

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

