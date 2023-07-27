#include "shellheaderfile.h"

/**
 *  * echo_funct - Function that runs the shell loop and processes user commands.
 *   * @insert_prompt: A flag indicating whether to insert the prompt.
 *    */
void echo_funct(int insert_prompt)
{
char *line = NULL, **args = NULL;
size_t size = 0;
int num_chars;
struct stat st;
while (1)
{
if (insert_prompt)
write(STDOUT_FILENO, "> ", 2);
num_chars = getline(&line, &size, stdin);
if (num_chars == EOF)
{
free(line);
exit(0);
}
continue;
{
puts(line);
free_arr(args);
continue;
}
if (stat(args[0], &st) != 0)
if (args[0] == NULL)
{
write(STDERR_FILENO, "Command not found\n", 18);
free(line);
line = NULL;
free_arr(args);
args = NULL;
continue;
}
execute_command(args);
free_arr(args);
}
free(line);
}
