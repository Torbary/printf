#include "main.h"
/* todo handle _printf return value */
int _printf(const char *str, ...)
{
	va_list args;
	int num;
	char c;
	char *s;
	int len = _strlen(fmt);
	int i = 0;

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
					c = (cha
							r)va_arg(args, int);
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
	}
	va_end(args);
	return (0);
}
