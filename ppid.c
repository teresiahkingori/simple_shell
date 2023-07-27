#include <stdio.h>
#include <unistd.h>
#include "shellheaderfile.h"

/**
 ** get_parent_process_id - Print the parent process ID.
 ** Description: This function prints the Parent Process ID.
 ** Return: Always 0 (Success).
 **/
int get_parent_process_id(void)
{
pid_t parent_pid;
parent_pid = getppid();
printf("Parent Process ID: %u\n", parent_pid);
return 0;
}
