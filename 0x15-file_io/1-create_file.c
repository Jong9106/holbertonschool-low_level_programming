#include "holberton.h"

/**
 * create_file - Function to create a file
 * @filename: pointer to the filen name in argv
 * @text_content: pointer to the text
 *Return: -1 for error, 1 success
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, i, inside;

	if (!filename)
		return (-1);

	new_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (new_file == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0 ; text_content[i] ; i++)
		{
		}
		/* write = lugar + contenido + tamaño */
		inside = write(new_file, text_content, i);

		if (inside == -1)
			return (-1);
	}

	close(new_file);
	return (1);
}
