#include "shellheaderfile.h"

/**
 *  * convert_string_to_integer - Convert a string to an integer.
 *   * @str: The string to convert.
 *    *
 *     * Return: The integer value of the string.
 **/
int my_av(const char *str)
{
int result = 0;
int sign = 1;
size_t i = 0;
if (str[i] == '-')
{
sign = -1;
i++;
}
for (; str[i] != '\0'; ++i)
{
if (str[i] < '0' || str[i] > '9')
{
break;
}
result = result * 10 + (str[i] - '0');
}
return sign * result;
}
