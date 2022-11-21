#include "main.h"
/**
  * check_specifier - check that charcater is a valid specifiers and
  * assign an appropriate func for its printing
  * @format: the specfier (char*)
  *
  * Return: a pointer to a function, if succesful
  * NULL pointer if not successful.
  */

int (*check_specifier(const char *format))(va_list)
{
	int i;
	/* instantiate the structure here */
	func_t my_array[4] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_cent},
		{NULL, NULL}};/*incase it hit a NULL*/

	/*create a for loop too*/
	for (i = 0; my_array[i].t != NULL; i++)
	{
		if (*(my_array[i].t) == *format)
		{
			return (my_array[i].f);
	        }
	}/* if it doesnt found a match,it gerrout of this loop and...*/
	return (NULL);

}

