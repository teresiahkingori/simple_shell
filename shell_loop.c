#include "shellheaderfile.h"
void free_arr(char **arr);

/**
 ** shell_loop - Function that starts the shell loop to read and execute commands.
 ** @is_interactive: Return value of isatty either 0 or 1.
 **/
void shell_loop(int is_interactive)
{
char *line = NULL;
char **arguments = NULL;
size_t size = 0;
int read_status;
struct stat file_stats;
while (1)
{
if (is_interactive)
write(STDOUT_FILENO, "$ ", 2);
read_status = getline(&line, &size, stdin);
if (read_status == EOF)
{
free(line);
exit(0);
}
if (_strcmp2(line, "\n") == 0)
continue;
arguments = str_break(line, " \t\r\n");
execute_conditions(arguments, line);
if (_strcmp2(arguments[0], "env") == 0)
{
print_environment();
free_arr(arguments);
continue;
}
if (stat(arguments[0], &file_stats) != 0)
get_path(arguments);
if (arguments[0] == NULL)
{
write(STDERR_FILENO, "Command not found\n", 18);
free(line);
line = NULL;
free_arr(arguments);
arguments = NULL;
continue;
}
exec_cmd(arguments);
free_arr(arguments);
}
free(line);
}
