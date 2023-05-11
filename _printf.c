#include "main.h"

/**
 * _strlen - finds the no. of character in a string
 * @str: string passed
 * Return: length of str
 */

int _strlen(const char *str)
{
	int len = 0;

	if (!str)
		return (0);
	while (str[len])
		len++;
	return (len);
}

/**
 * _putchar - writes a character to stdout
 * @ch: character to write
 * Return: void
 */

void _putchar(char ch)
{
	if (ch)
		write(1, &ch, 1);
}

/**
 * _print_str - prints a string to the screen
 * @str: string given
 * Return: void
 */
int _print_str(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i++]);
	}

	return (i);
}

/**
  * _printf - print the character to the stdout
  * @fmt: string to print the characters
  * @...: varaidic parameters (unknown)
  *
  * Return: number of characters printed
  */
int _printf(const char *fmt, ...)
{
	va_list args;
	char *s;
	int len = _strlen(fmt);
	int i = 0, count = 0;

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
					count += _print_str(s);
					break;
				case 'c':
					i++;
					_putchar((char)va_arg(args, int));
					count += 1;
					break;
				default:
					_putchar(fmt[i]);
					count += 1;
					break;
			}
		}
		else
		{
			count += 1;
			_putchar(fmt[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
