#include "shellheaderfile.h"

/**
 *  * handle_ctrl_c - function that will handle the Ctrl-C signal
 *   * @signal_number: the signal number (unused)
 *    */
void sa_Handler(__attribute__((unused)) int sg_num)
{
signal(SIGINT, sa_Handler);
write(STDOUT_FILENO, "\n", 1);
write(STDOUT_FILENO, "$ ", 2);
}
