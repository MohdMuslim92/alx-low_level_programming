#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <ctype.h>
#include "main.h"

/**
 * is_regular_file - check function
 * DESCRIPTION: a function to check if the file is a
 * regular file
 * @filename: pointer to the file passed to the function
 * Return: 1 if the file is a regular file, and 0 otherwise
 */
int is_regular_file(const char *filename)
{
	struct stat st;

	if (stat(filename, &st) == -1)
		return (0);
	return (S_ISREG(st.st_mode));
}

/**
 * read_file - read function
 * DESCRIPTION: a function to read a file and return it's contents
 * @filename: pointer to the file passed to the function
 * @max_size: the maximum number of bytes to be read from the file
 * @count:  pointer to a variable that will hold the number of bytes
 * actually read from the file
 * Return: a pointer to a character array that contains the data read
 * from the file
 */
char *read_file(const char *filename, size_t max_size, ssize_t *count)
{
	FILE *fp;
	char *buf;

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	if (!is_regular_file(filename))
	{
		fclose(fp);
		return (NULL);
	}

	buf = malloc(sizeof(char) * (max_size + 1));
	if (buf == NULL)
	{
		fclose(fp);
		return (0);
	}

	*count = fread(buf, sizeof(char), max_size, fp);
	if (*count == -1)
	{
		free(buf);
		fclose(fp);
		return (0);
	}

	buf[*count] = '\0';
	fclose(fp);
	return (buf);
}

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
	ssize_t count;
	char *size;

	if (filename == NULL || *filename == '\0' || isspace(*filename))
		return (0);

	size = read_file(filename, letters, &count);
	if (size == NULL)
		return (0);

	if (fwrite(size, sizeof(char), (size_t)count, stdout) != (size_t)count)
	{
		free(size);
		return (0);
	}

	free(size);

	return (count);
}

