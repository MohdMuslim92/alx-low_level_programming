#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

int copy_file(const char *from_path, const char *to_path);

/**
 * main - Entry point
 * DESCRIPTION: a program that copies the content of a file
 * to another file
 * @argc: name of the file to be created
 * @argv: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}
	result = copy_file(argv[1], argv[2]);

	return (result);
}

/**
 * copy_file - copy file to file
 * DESCRIPTION: a function that copies the content of a file
 * to another file
 * @from_path: the first file to copy from
 * @to_path: the second file to copy into
 * Return: 0 on success, -1 on failure
 */
int copy_file(const char *from_path, const char *to_path)
{
	FILE *from = fopen(from_path, "r");
	FILE *to = fopen(to_path, "w");
	char buffer[1024];
	int write, close, count;
	int cmd;
	struct stat st;
	int stat_file = stat(to_path, &st);
	mode_t mode = 0664;

	if (from == NULL)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", from_path);
		return (98);
	}

	if (to == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", to_path);
		fclose(from);
		return (99);
	}

	while (!feof(from))
	{
		count = fread(buffer, 1, sizeof(buffer), from);
		if (count > 0)
		{
			write = fwrite(buffer, 1, count, to);
			if (write < 0 || write < count)
			{
				fprintf(stderr, "Error: Can't write to %s\n", to_path);
				fclose(from);
				fclose(to);
				return (99);
			}
		}
	}

	close = fclose(from);
	if (close != 0)
	{
		fprintf(stderr, "Error: Can't close fd %s", from_path);
		fclose(to);
		return (100);
	}

	close = fclose(to);
	if (close != 0)
	{
		fprintf(stderr, "Error: Can't close fd %s", to_path);
		return (100);
	}

	if (stat_file == 0)
	{
		mode = st.st_mode & 0777;
	}
	cmd = chmod(to_path, mode);
	if (cmd == -1)
	{
		return (-1);
	}
	return (0);
}

