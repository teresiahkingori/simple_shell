#include "shellheaderfile.h"
/**
 *  * get_path - function to get the path of a command
 *   * @command: the command to find the path for
 **/
void get_path(char **command)
{
int i;
int len = 0;
char **tokens = NULL, *path_env = NULL, *temporary = NULL, *env_var = environ[0];
while (env_var[len] != '=')
{
len++;
}
path_env = malloc(sizeof(char) * (_strlen(env_var + len + 1) + 1));
_strcpy(path_env, env_var + len + 1);
tokens = str_break(path_env, ":");
free(path_env);
for (i = 0; tokens[i]; i++)
{
temporary = malloc((_strlen(tokens[i]) + _strlen(command[0]) + 2 + 1) * sizeof(char));
_strcpy(temporary, tokens[i]);
append_str(temporary, "/");
append_str(temporary, command[0]);
if (access(temporary, F_OK) == 0)
break;
free(temporary);
temporary = NULL;
}
free_arr(tokens);
if (temporary != NULL && (_strcmp(command[0], "ls") == 0 || _strcmp(command[0], "echo") == 0 || _strcmp(command[0], "rm") == 0))
{
free(command[0]);
command[0] = temporary;
return;
}
if (temporary != NULL)
{
free(temporary);
}
free(command[0]);
command[0] = NULL;
}
