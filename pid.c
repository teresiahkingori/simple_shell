#include <stdio.h>
#include <unistd.h>
#include "shellheaderfile.h"

/**
 ** process_id - Get and print the current process ID..
 ** Return: Always 0.
 **/
int process_id(void)
{
pid_t my_pid;
my_pid = getpid();
printf("Current Process ID: %u\n", my_pid);
return 0;
}
