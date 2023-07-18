#include "shellheaderfile.h"

/**
 *print_environment - the  Function that prints the environment variables
 **/
void print_environment(void)
{
char **env_var = environ;
for (; *env_var; env_var++)
{
_puts(*env_var);
_puts("\n");
}
}
