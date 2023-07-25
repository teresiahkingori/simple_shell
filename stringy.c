#include "shellheaderfile.h"

/**
 *  * get_string_length - function that returns the length of a given string
 *   * @str: the string whose length is to be found
 *    *
 *     * Return: length of the string
 **/
ssize_t get_string_length(char *str)
{
ssize_t length = 0;
while (str && *(str + length))
length++;
return length;
}
/**
*  * copy_string - function that copies a string from source to destination
*   * @destination: the new string
*    * @source: the original string
*     * Return: pointer to the destination string
**/
char *copy_string(char *destination, char *source)
{
int i;
for (i = 0; source[i] != '\0'; i++)
destination[i] = source[i];
destination[i] = '\0';
return destination;
}
/**

*  * concatenate_strings - function that appends two strings

*   * @destination: the new string

*    * @source: the original string
*      * Return: pointer to the joined string
**/
char *concatenate_strings(char *destination, const char *source)
{
int destination_length = 0;
int i = 0;
while (destination[destination_length] != '\0')
destination_length++;
while (source[i] != '\0')
{
destination[destination_length] = source[i];
destination_length++;
i++;
}
destination[destination_length] = '\0';
return destination;
}
/**
*  * compare_strings - function that compares two strings
*   * @str1: the first string
*    * @str2: the second string
*     * Return: 0 if the strings are equal, if not, the difference
**/
int compare_strings(char *str1, char *str2)
{
int i = 0;
while (str1[i] == str2[i])
{
if (str1[i] == '\0')
return 0;
i++;
}
return str1[i] - str2[i];
}
/**
*  * compare_strings2 - compares 2 strings
*   * @str1: the first string
*    * @str2: the second string
*     * Return: 0 if the strings are equal, else the difference
**/
int compare_strings2(const char *str1, const char *str2)
{
while (*str1 && (*str1 == *str2))
{
str1++;
str2++;
}
return (*(const unsigned char *)str1 - *(const unsigned char *)str2);
}
