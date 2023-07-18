#include "shellheaderfile.h"
/**
 * free_array - Function that frees an array.
 * @arr: The array to be freed.
 **/
void free_array(char **arr)
{
int i;
for (i = 0; arr[i]; i++)
{
free(arr[i]);
arr[i] = NULL;
}
free(arr);
arr = NULL;
}
/**
* main - Entry point of the program.
* Return: 0.
**/
int main(void)
{
signal(SIGINT, signal_handler);
shell_loop(is_interactive());
return (0);
}
