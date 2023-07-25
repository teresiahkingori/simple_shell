#include "shellheaderfile.h"

/**
 *  * print_string - function that prints a string
 *   * @string: the string to be printed
 *    *
 *     * Return: the number of characters printed
 **/
ssize_t print_string(char *string)
{
ssize_t length = _strlen(string);
return write(STDOUT_FILENO, string, length);
}
