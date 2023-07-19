#include "shellheaderfile.h"

/**
 * _realloc - Function that reallocates memory block.
 * @ptr: Pointer to previously allocated memory.
 * @old_size: Size of space allocated to ptr.
 * @new_size: Size of new memory block.
 * Return: Pointer to the new allocated memory block.
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr, *old_ptr = ptr;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = old_ptr[i];
free(ptr);
return (new_ptr);
}
/**
* string_duplicate - Function that duplicates a string.
* @str: String to be duplicated..
* Return: Pointer to the new allocated memory block.
**/
char *string_duplicate(char *str)
{
char *new_str;
unsigned int i, len;
if (str == NULL)
return (NULL);
len = 0;
while (str[len] != '\0')
len++;
new_str = malloc(sizeof(char) * (len + 1));
if (new_str == NULL)
return (NULL);
for (i = 0; i < len; i++)
new_str[i] = str[i];
new_str[len] = '\0';
return (new_str);
}
