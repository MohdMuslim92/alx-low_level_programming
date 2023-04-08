#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - file read function
 * DESCRIPTION: a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: pointer to the file to the function
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count = 0, i;
	char *size = malloc(sizeof(size_t) * (letters + 1));
	FILE *fp;

	if (size == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		free(size);
		return (0);
	}
	count = fread(size, sizeof(char), letters, fp);
	if (count > 0)
	{
		size[count] = '\0';
		for (i = 0; i < count; i++)
			_putchar(size[i]);
	}
	fclose(fp);
	free(size);
	return (count);
}

