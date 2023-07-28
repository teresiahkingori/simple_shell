#include "shellheaderfile.h"
/**
 * free_array - Function that frees an array.
 * @arr: The array to be freed.
 **/
void free_arr(char **arr)
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
 * * main - Entry point of the program.
 * * @sa_Handler: the handler
 * * Return: 0.
 * **/
int main(void)
{
signal(SIGINT, sa_Handler);
echo(isatty(STDIN_FILENO));
return (0);
}
