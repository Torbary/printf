#include "main.h"
/**
  * _printf - print the character to the stdout
  * @str: string to print the characters
  * @...: varaidic parameters (unknown)
  *
  * Return: number of characters printed
  */
int _printf(const char *str, ...)
{
	va_list args;
	int num;
	char c;
	char *s;
	int len = _strlen(fmt);
	int i = 0;
	int count = 0;
	int value = 0;

	va_start(args, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%' && (i + 1) < len)
		{
			switch (fmt[i + 1])
			{
				case 's':
					i++;
					s = va_arg(args, char *);
					while (*s)
						_putchar(*s++);
					break;
				case 'c':
					i++;
					c = (char)va_arg(args, int);
					_putchar(c);
					break;
				default:
					_putchar(fmt[i]);
					break;
			}
		}
		else
			_putchar(fmt[i]);
		i++;

		if (fmt[i + 1] == '\0')
		{
			break;
		}
		if (fmt[i + 1] != '\0')
		{
			value = write(1, &fmt[i + 1], 1);
			count = count + value;
			i = i + 2;
			continue;
		}
	}
	va_end(args);
	return (count);
}
