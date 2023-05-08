#include "main.h"

/**
 * create_file - Function that creates a files.
 *
 * @text_content: content or element of the file
 * @filename: Created file's name
 *
 * Return: Return -1 on failure, 1 on success.
 */

int create_file(const char *filename, char *text_content)
{
	int my;
	int m;
	ssize_t ecr;

	if (filename == NULL)
	{
		return (-1);
	}

	my = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (my == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (m = 0; text_content[m]; m++)
			;
		ecr = write(my, text_content, m);
		if (ecr == -1 || ecr != m)
		{
			close(my);
			return (-1);
		}
	}
	close(my);
	return (1);
}
