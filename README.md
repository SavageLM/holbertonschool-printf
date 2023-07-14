# **Project** `_printf`

## Introduction
> Hey there:) Thanks for checking out our first group project. For this we are creating our own printf function following the guidelines provided and the other files listed below.

## What is `_printf`?
For this project we have recreated our own printf function. See the [printf man page](https://man7.org/linux/man-pages/man3/printf.3.html) to learn more about the original function. Using a struct data type, we check for matches within our string called `format` against our conversion specifiers. This is done in order to determine if value is to be printed or evaluated futher. This function `_printf` will continue to print until it reaches the end of our `format` string at which time the program will be completed.

## How to download
Go to https://github.com/SavageLM/holbertonschool-printf

Download files or copy the clone URL

![github_wheretodownload](https://github.com/SavageLM/holbertonschool-printf/assets/126801159/8a84e94d-8448-48f4-9bd5-9b19e203ab5f)


To clone into repository, go to terminal and type the following

```
git clone [copy URL]
```
### General Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS
- Betty Style
- Not allowed to use global variables
- No more than 5 functions per file

##### Prototype
```
int _printf(const char *format, ...);
```
### Repo Files
| **File** | **Description** |
|----------|----------------:|
|[README.md](https://github.com/SavageLM/holbertonschool-printf/blob/master/README.md)|Information and layout of project|
|[man_3_printf](https://github.com/SavageLM/holbertonschool-printf/blob/master/man_3_printf)|Manual page with more detailed information|
|[main.h](https://github.com/SavageLM/holbertonschool-printf/blob/master/main.h)|Header file that includes prototypes, functions, and structure used|
|[_printf.c](https://github.com/SavageLM/holbertonschool-printf/blob/master/_printf.c)|File that contains the source code|
|[helper_func.c](https://github.com/SavageLM/holbertonschool-printf/blob/master/helper_func.c)|Needed for parsing through `format` argument|
|[_putchar.c](https://github.com/SavageLM/holbertonschool-printf/blob/master/_putchar.c)|Used to replicate putchar function|
|[_print_char.c](https://github.com/SavageLM/holbertonschool-printf/blob/master/print_char.c)|Needed to print a character|
|[print_num](https://github.com/SavageLM/holbertonschool-printf/blob/master/print_num.c)|Needed to print integers recursively|
|[print_string](https://github.com/SavageLM/holbertonschool-printf/blob/master/print_string.c)|Needed to print a string|

##### Here is an example of a main file that can be used to test the `_printf` function
```
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

##### Use this to compile files
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

### Example
```
code drop
```
***
### Flowchart of how the program uses all the different functions and how we check for the specifiers required
![Workflow for _printf](https://github.com/SavageLM/holbertonschool-printf/assets/126801159/95e71c80-6a4c-42db-9d44-0e3c1210c0b6)


***
*Created by [Logan Savage](https://github.com/SavageLM) & [Jess Dison](https://github.com/jessasesh)*
