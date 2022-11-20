#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @ch: character to write
 * Return: void
 */
void _putchar(char ch)
{
	if (ch)
	{
		write(1, &ch, 1);
	}
}
