#include "shellheaderfile.h"

/**
 ** print_string_length - Prints the length of a given string.
 ** @str: The string to be printed.
 ** Return: Returns the number of characters in the string.
 **/
ssize_t print_string_length(char *str)
{
ssize_t length = 0;
while (str[length] != '\0')
length++;
return (write(STDOUT_FILENO, str, length));
}
