#include "main.h"
/**
 * create_file - Creates a file.
 * @filname: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 * Return: If the function fails return -1.
 * Otherwise return 1.
 */
int create_file(const char *filname, char *text_content)
{
int fun, w, ln = 0;

if (filname == NULL)
return (-1);
if (text_content != NULL)
{
for (ln = 0; text_content[ln];)
ln++;
}
fun = open(filname, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fun, text_content, ln);
if (fun == -1 || w == -1)
return (-1);
close(fun);
return (1);
}
