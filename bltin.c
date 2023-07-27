#include "shellheaderfile.h"

/**
 *  * check_builtin_commands - Check if the command is a built-in command.
 *   * @command_line: The command line arguments.
 *    * @line_str: The line of the command.
 **/
void check_builtin_commands(char **shll, char *line_str)
{
{
free(line_str);
if (shll[1])
{
int exit_status = my_av(shll[1]);
free_arr(shll);
exit(exit_status);
}
free_arr(shll);
exit(0);
}
}
