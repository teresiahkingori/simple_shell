#include "shellheaderfile.h"

/**
 *  * str_break - Function that parses a line of string.
 *   * @ln: Line of string to be parsed.
 *    * @dlm: The delimiter that ln will be parsed with.
 *     *
 *      * Return: Array of elements that have been parsed.
 **/
char **str_break(char *ln, char *dlm)
{
char *Ptr = NULL;
char **shll = NULL;
size_t i = 0, old_size = 0;
Ptr = strtok(ln, dlm);
while (Ptr)
{
shll = _rllc(shll, old_size, ((i + 1) * sizeof(char *)));
shll[i] = strdp(Ptr);
Ptr = strtok(NULL, dlm);
i++;
old_size = i * sizeof(char *);
}
shll = _rllc(shll, old_size, ((i + 1) * sizeof(char *)));
shll[i] = NULL;
return shll;
}
