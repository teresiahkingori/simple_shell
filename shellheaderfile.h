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
#include <signal.h>

void print_environment(void);
void exec_cmd(char **shll);
void free_array(char **arr);
int main(void);
int str_to_int(char *str);
void shell_loop(int is_interactive);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *string_duplicate(char *str);
int _strcmp2(const char *s1, const char *s2);
char **str_break(char *str, const char *delimiter);
void execute_conditions(char **arguments, char *line);
void free_arr(char **arr);
void get_path(char **arguments);
void execute_command(char **arguments);

void _puts(char *);
void print_environment(void);

#endif
