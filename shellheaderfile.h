#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void print_environment(void)
void exec_cmd(char **shll)
void free_array(char **arr)
int main(void)
int str-int(char *str)
void shell_loop(int is_interactive)


