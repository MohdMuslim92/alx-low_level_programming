#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "main.h"
/**
 * append_text_to_file - file append function
 * DESCRIPTION: a function that appends text at the end of a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int write;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "a");
	if (fp == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	write = fprintf(fp, "%s", text_content);
	if (write < 0 || (size_t)write < strlen(text_content))
		return (-1);
	fclose(fp);
	return (1);
}

