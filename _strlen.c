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
		return (-1);
	while (str[len])
	{
		len++;
	}

	return (len);
}
