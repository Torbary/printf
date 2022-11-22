#include "main.h"
#include <string.h>
#include <stdio.h>
int main(void)
{
	int size = _printf("%s Hello World %s %c", "David", "Daniel", '\n');
	_printf("%s Hello World %s %c", "David", "Daniel", '\n');
	printf("%d\n", size);
	return 0;
}

// int _printf(const char* fmt, ...)
// {
// 	va_list arg_list;
// 	int num;
// 	char c;
// 	char *s;
// 	int len = _strlen(fmt);
// 	int i = 0;

// 	va_start(arg_list, fmt);
// 	/* while the character at index i is != '/0' */
// 	while (fmt[i])
// 	{
// 		/* if it's % and index at (i+1) is valid*/
// 		if (fmt[i] == '%' && (i + 1) < len)
// 		{
// 			/* check the next element after our index*/
// 			switch (fmt[i + 1])
// 			{
// 				/* case the element is s */
// 				case 's':
// 					/* it's a string so change the index */
// 					i++;
// 					/* gets the string */
// 					s = va_arg(arg_list, char *);
// 					/* prints the string */
// 					while (*s)
// 					{
// 						_putchar(*s++);
// 					}
// 					break;
// 				/* case the element is c */
// 				case 'c':
// 					/* it's a char */
// 					/* change it's index */
// 					i++;
// 					/* gets the character */
// 					c = (char)va_arg(arg_list, int);
// 					/* prints the character */
// 					_putchar(c);
// 					break;
// 				default:
// 					/* prints the element at the current index */
// 					_putchar(fmt[i]);
// 					break;
// 			}
// 		}
// 		else
// 		{
// 			_putchar(fmt[i]);
// 		}
// 		i++;
// 	}
// 	va_end(arg_list);
// 	return 0;
// }
