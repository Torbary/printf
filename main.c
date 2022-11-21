#include "main.h"

/**
  * main - test file
  * program starts execution from here
  * Return:  always 0
  */

int main(void)
{
	int i = 0;
	int count_std = 0;
	int count_hmd = 0;

	write(1, "STANDARD:\n", 10);
	count_std = printf("My name starts with: %c\n", 'A');
	printf(" I printed %d characters\n", count_std);

	write(1,"_______________________\n",25);

	write(1, "HOME_MADE:\n", 11);
	count_hmd = _printf("My name starts with: %c\n", 'A');
	printf("I printed %d characters\n", count_hmd);

	return (0);
}
