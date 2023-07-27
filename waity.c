#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shellheaderfile.h"

/**
 *  * wait_in - function for performing the wait operation
 *   * This function will perform the specified operations.
 *    * Return: 0.
 **/
int wait_in(void)
{
pid_t child_pid;
int status;
child_pid = fork();
if (child_pid == -1)
{
perror("ERROR:");
return 1;
}
if (child_pid == 0)
{
printf("Please wait...\n");
sleep(3);
}
else
{
wait(&status);
printf("It's all done!\n");
}
return 0;
}
