#include "main.h"

/**
 * read_textfile - read a text file and print it to
 * the standard output.
 * @filename: name of the file to be read
 * @letters: number of letter to be read
 *
 * Return: the number of letters printed, or 0 if
 * failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int s, t;
char *buf;

if (!filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd < 0)
return (0);

buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);

s = read(fd, buf, letters);
if (s < 0)
{
free(buf);
return (0);
}
buf[s] = '\0';

close(fd);

t = write(STDOUT_FILENO, buf, s);
if (t < 0)
{
free(buf);
return (0);
}
free(buf);
return (t);
}
