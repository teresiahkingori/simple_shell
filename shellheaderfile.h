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

extern char **environ;


void print_environment(void);
void exec_cmd(char **shll);
int main(void);
int str_to_int(char *str);
void shell_loop(int is_interactive);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *string_duplicate(char *str);
int _strcmp2(const char *s1, const char *s2);

void execute_conditions(char **arguments, char *line);
void free_arr(char **arr);
void get_path(char **arguments);
void execute_command(char **arguments);
void sa_Handler(int sg_num);
void echo(int insrt);
void _puts(char *env_var);
void print_environment(void);
char *append_str(char *dstn, const char *sce);
int _strcmp(char *str1, char *str2);
char *_strcpy(char *dstn, char *sce);
ssize_t _strlen(char *s);

void *_rllc(void *ptr, unsigned int old_size, unsigned int new_size);
char *strdp(char *str);
char **str_brk(char *ln, char *dlm);

int my_av(const char *str);
void check_builtin_commands(char **command_line, char *line_str);
ssize_t str_length(char *str);
int wait_in(void);
int process_id(void);
void echo_funct(int insert_prompt);
int get_parent_process_id(void);
int process_id(void);

#endif
