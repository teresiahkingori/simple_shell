#include "shellheaderfile.h"

/**
 *  * split_string - function that splits a line of text into tokens
 *   * @line: the line of text to be split
 *    * @delimiter: the delimiter used for splitting
 *     * Return: an array of pointers to the parsed tokens
 **/
char **split_string(char *line, char *delimiter)
{
char *token = NULL, **tokens_array = NULL;
size_t i = 0, old_size = 0;
token = strtok(line, delimiter);
while (token)
{
tokens_array = _reallocate(tokens_array, old_size, ((i + 1) * sizeof(char *)));
tokens_array[i] = duplicate_string(token);
token = strtok(NULL, delimiter);
i++;
old_size = i * sizeof(char *);
}
tokens_array = _reallocate(tokens_array, old_size, ((i + 1) * sizeof(char *)));
tokens_array[i] = NULL;
return tokens_array;
}
