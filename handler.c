#include "shellheaderfile.h"

/**
 *  * handle_sigint - function that will handle the Ctrl-C signal
 *   * @signal_number: the signal number (unused)
 **/
void handle_sigint(__attribute__((unused)) int signal_number)
{
signal(SIGINT, handle_sigint);
write(STDOUT_FILENO, "\n", 1);
write(STDOUT_FILENO, "$ ", 2);
}
