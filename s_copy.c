#include "shellheaderfile.h"

/**
 *  * signal_handler - Signal handler function for the copy command.
 *   * @signal_index: Unused signal index.
 **/
void signal_handler(__attribute__((unused)) int signal_index)
{
signal(SIGINT, signal_handler);
write(STDOUT_FILENO, "\n$ ", 3);
}
