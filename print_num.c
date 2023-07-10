#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "main.h"

/**
 * print_num- Function to print integers
 * @arg: arguement passed to function
 * Return: returns print count.
 */

int print_num(va_list arg)
{
	unsigned int num = 0;
	int pc = 1, tmp;

	num = va_arg(arg, int);
	tmp = num;

	if (tmp < 0)
	{
		_putchar('-');
		tmp = tmp * (-1);
		num = tmp;
		pc += 1;
	}

	while (num > 9)
	{
		num = num / 10;
		pc++;
	}

	recursenum(tmp);

	return (pc);
}

/**
 * recursenum- Function to print a number
 * @n: number to print
 */

void recursenum(int n)
{
	unsigned int num = n, nums = 0;

	if (num / 10)
	{
		nums = (num / 10);
		recursenum(nums);
	}

	_putchar((num % 10) + '0');
}
