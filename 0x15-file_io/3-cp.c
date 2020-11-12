#include "holberton.h"
#define BUFFER 1024
/**
 * main - Program to copy the content of a file into an other
 * @argc: numbers of arguments
 * @argv: name of the files
 * Return: 0 to success or -1 for error
 */
int main(int argc, char **argv)
{
	int file_from, file_to, f_read, f_write, cl;
	char buffer[BUFFER];

	if (argc != 3)
		dprintf(2, "Usage: cp file_from file_to\n"),
		exit(97);
	if (!argv[1])
		dprintf(2, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	if (argv[2] == NULL)
		dprintf(2, "Error: Can't write to %s\n", argv[2]),
		exit(99);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	f_read = read(file_from, buffer, BUFFER);
	if (f_read == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	while (f_read != 0)
	{
		f_write = write(file_to, buffer, f_read);
		if (f_write == -1 || f_write != f_read)
			dprintf(2, "Error: Can't write to %s\n", argv[2]),
			exit(99);
		f_read = read(file_from, buffer, BUFFER);
		if (f_read == -1)
			dprintf(2, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	}
	cl = close(file_from);
	if (cl == -1)
		dprintf(2, "Can't close fd %d\n", file_from), exit(100);
	cl = close(file_to);
	if (cl == -1)
		dprintf(2, "Can't close fd %d\n", file_to), exit(100);
	return (0);
}
