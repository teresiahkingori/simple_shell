#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "shellheaderfile.h"

/**
 ** file_status - This function demonstrates using stat to get file status.
 ** @argc: The number of arguments passed to the function.
 ** @argv: An array of strings containing the arguments.
 ** Return: 0 on success, 1 on failure.
 **/
int file_status(int argc, char **argv)
{
unsigned int i;
struct stat st;
if (argc < 2)
{
printf("Usage: %s <file_path>\n", argv[0]);
return 1;
}
i = 1;
while (argv[i])
{
printf("%s: ", argv[i]);
if (stat(argv[i], &st) == 0)
{
printf("File found\n");
}
else
{
printf("File not found\n");
}
i++;
}
return 0;
}
