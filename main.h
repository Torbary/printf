#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


int (*check_specifier(const char*))(va_list);
int _print(const char *format, ...);

/**
  * struct func - struct for specifier to printer
  * @t: character to compare
  * @f: functin to handle the printing
  *
  */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);

#endif
