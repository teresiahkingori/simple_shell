#include <stdio.h>
#include <stdlib.h>
#include "shellheaderfile.h"

/**
 ** user_prompt - Prompt function to get user input.
 ** This function reads user input from the command line and prints it back.
 ** Return: Always 0.
 **/
int user_prompt(void)
{
char *buffer = malloc(1024);
size_t len = 1024;
while (1)
{
printf("$ ");
getline(&buffer, &len, stdin);
printf("You entered: %s", buffer);
}
free(buffer);
return 0;
}
