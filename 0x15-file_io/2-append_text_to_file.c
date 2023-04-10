#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filname: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: If the function fails or filname is NULL return -1.
 * If the file exist the user has write permissions return 1.
 * Otherwise return -1.
 */
int append_text_to_file(const char *filname, char *text_content)
{
int i, w, ln = 0;

if (filname == NULL)
return (-1);

if (text_content != NULL)
{
for (ln = 0; text_content[ln];)
ln++;
}

i = open(filname, O_WRONLY | O_APPEND);
w = write(i, text_content, ln);

if (i == -1 || w == -1)
return (-1);

close(i);

return (1);
}
