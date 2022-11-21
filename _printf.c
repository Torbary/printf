#include "main.h"

/**
  * _printf - print the character to the stdout
  * @format: string to print (char *)
  * @...: varaidic parameters (unknown)
  *
  * Return: number of characters printed
  */

int _printf(char *format, ...)
{
	int i = 0;
	int count = 0;
	int value = 0;
	/*declare a var called va_list*/
	va_list args;
	/*initialize it using va_start(agrs, the last arg)*/
	va_start(args, format);
	int (*f)(va_list);

	/*prevent parsing a null pointer*/
	if (format == NULL)
		return (-1);
	/* print each character of string*/
	while (format[i])
	{
		if (format[i] != '%')
		{	
		
			value = write(1,&format[i],1);
			count = count + value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			/* return a function pointer*/
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				count = count + value; /*update count*/
				i = i + 2; /*update index;move to next 2*/
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				value = write(1,&format[i + 1],1);
				count = count + value;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}

