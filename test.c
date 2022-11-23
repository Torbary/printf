#include "main.h"
#include <string.h>
#include <stdio.h>
int main(void)
{
	int size = _printf("%s Hello World %s %c", "David", "Daniel", '\n');
	int size1 = printf("%s Hello World %s %c", "David", "Daniel", '\n');
	printf("%d == %d\n", size, size1);
	return 0;
}