#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "main.h"
/**
 * create_file - file create function
 * DESCRIPTION: a function that creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int cmd;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = '\0';
	fp = fopen(filename, "w+");
	if (fp == NULL)
		return (-1);
	fprintf(fp, "%s", text_content);
	fclose(fp);
	cmd = chmod(filename, mode);
	if (cmd == -1)
		return (-1);
	return (1);
}

