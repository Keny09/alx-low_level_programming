#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *fb;
ssize_t fun;
ssize_t w;
ssize_t t;

fun = open(filename, O_RDONLY);
if (fun == -1)
return (0);
fb = malloc(sizeof(char) * letters);
t = read(fun, fb, letters);
w = write(STDOUT_FILENO, fb, t);
free(fb);
close(fun);
return (w);
}
