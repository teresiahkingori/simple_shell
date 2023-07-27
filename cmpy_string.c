#include "shellheaderfile.h"

/**
 *  * str_length - Calculate the length of a string.
 *   * @str: The string to be used.
 *    *
 *     * Return: The length of the string.
 **/
ssize_t str_length(char *str)
{
ssize_t length = 0;

while (str && *(str + length))
length++;
return length;
}

/**
 *  * str_copy - Copy a string to a destination.
 *   * @destination: The destination string.
 *    * @source: The source string.
 *     *
 *      * Return: Pointer to the destination.
 **/
char *str_copy(char *destination, char *source)
{
int i;
for (i = 0; source[i] != '\0'; i++)
destination[i] = source[i];
destination[i] = '\0';
return destination;
}

/**
 *  * str_append - Append two strings.
 *   * @destination: The destination string.
 *    * @source: The source string.
 *     *
 *      * Return: Pointer to the appended string.
 **/
char *str_append(char *destination, const char *source)
{
int destination_len = 0;
int i = 0;
while (destination[destination_len] != '\0')
destination_len++;
while (source[i] != '\0')
{
destination[destination_len] = source[i];
destination_len++;
i++;
}
destination[destination_len] = '\0';
return destination;
}

/**
 *  * str_compare - Compare two strings.
 *   * @str1: The first string.
 *    * @str2: The second string.
 *     *
 *      * Return: The difference between the two strings, 0 if equal.
 **/
int str_cmp(char *str1, char *str2)
{
int i = 0;
while (str1[i] == str2[i])
{
if (str1[i] == '\0')
return 0;
i++;
}
return (str1[i] - str2[i]);
}

/**
 *  * str_cmp2 - Compare two strings (const version).
 *   * @str1: The first string.
 *    * @str2: The second string.
 *     *
 *      * Return: The difference, 0 if equal.
 **/
int str_cmp2(const char *str1, const char *str2)
{
while (*str1 && (*str1 == *str2))
{
str1++;
str2++;
}
return (*(const unsigned char *)str1 - *(const unsigned char *)str2);
}
