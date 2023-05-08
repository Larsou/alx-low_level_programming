#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of file.
 * @filename: The file's name.
 * @text_content: The file's content.
 *
 * Return: return 1 in success, return -1 in failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int myfi, n, myname;

	if (filename == NULL)
	{
		return (-1);
	}

	myfi = open(filename, O_WRONLY | O_APPEND);
	if (myfi == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (n = 0; text_content[n]; n++)

			;
		myname = write(myfi, text_content, n);
		if (myname == -1)
		{
			return (-1);
		}
	}

	close(myfi);
	return (1);
}
