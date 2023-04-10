#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * @filename:file to be read
 * @letters:number of letters to be read
 * Return: 0 if filename is null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
		char *buf;
	ssize_t fp;
	ssize_t a;
	ssize_t b;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	b = read(fp, buf, letters);
	a = write(STDOUT_FILENO, buf, b);

	free(buf);
	close(fp);
	return (a);
}

