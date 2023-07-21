#include "shellheaderfile.h"
extern char **environ;
/**
 ** exec_cmd - the Function that executes a command.
 ** @shll: The command that will be executed.
 **/
void exec_cmd(char **shll)
{
pid_t pid = 0;
int status = 0;
if (shll)
{
pid = fork();
if (pid == -1)
{
perror("Error in fork");
exit(EXIT_FAILURE);
}
else if (pid == 0)
{
if (execve(shll[0], shll, environ) == -1)
{
perror(shll[0]);
exit(EXIT_FAILURE);
}
exit(EXIT_SUCCESS);
}
else
{
waitpid(pid, &status, 0);
}
}
}
