#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * print_percent- prints percent signs
 * @arg: input to print
 * Return: returns print count
 */

int print_percent(va_list arg)
{
        char *percent = 0;
        int i = 0, c = 0;

        *percent = va_arg(arg, int);

        while (percent[i])
        {
                if ((percent[i - 1] == '%') && (percent[i] == '%'))
                        _putchar('%');
                if ((percent[i - 1] == '/') && (percent[i] == '%'))
                        _putchar('%');
                i++;
                c++;
        }

        return (c);
}
