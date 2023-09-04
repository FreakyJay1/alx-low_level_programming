#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * check_read -the  checks if reading the file was a success
 * @fd: the file descriptor
 * @filename: the file name
 * Return: 0 always
 */

void check_read(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * check_write -the checks if writing the file was a success
 * @fd:the file descriptor
 * @filename: file of name
 * Return: 0 always
 */

void check_write(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * check_close - the checks if closing the file was a success
 * @fd: file of descriptor
 * Return: 0 always
 */

void check_close(int fd)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_contents -the copies the content buffer by buffer
 * @fd_from:the  source file
 * @fd_to: the destination file
 * @file_from: the source file name
 * @file_to: the destination file name
 * Return: 0 always
 */

void copy_contents(int dj_f, int dj_t, char *file_from, char *file_to)
{
	int bytes_r = 1, bytes_w, c;
	char buff[1024];

	while (bytes_r != 0)
	{
		bytes_r = read(dj_f, buff, sizeof(buff));
		check_read(bytes_r, file_from);

		bytes_w = 0;
		while (bytes_w < bytes_r)
		{
			c = write(dj_t, buff + bytes_w, bytes_r - bytes_w);
			check_write(c, file_to);
			bytes_w += c;
		}
	}
}

/**
 * main - check the codes
 * @argc: number of the arguments
 * @argv: string of arguments
 * Return: Always 0 success
 */

int main(int argc, char *argv[])
{
	int dj_f, dj_t, c_f, cl_t;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	dj_f = open(argv[1], O_RDONLY);
	check_read(dj_f, argv[1]);
	dj_t = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	check_write(dj_t, argv[2]);

	copy_contents(dj_f, dj_t, argv[1], argv[2]);

	cl_t = close(dj_t);
	check_close(cl_t);
	c_f = close(dj_f);
	check_close(c_f);
	return (0);
}
