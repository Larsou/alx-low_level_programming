#include "main.h"

/**
 * read_textfile - Function that reads text file and prints it.
 * @filename: the file's name that we want to read.
 * @letters: The number of letters to be printed and readed.
 *
 * Return: If the function fails or filename is NULL return 0,
 *         if true number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, m, p;
	char *str;

	if (filename == NULL)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	n = open(filename, O_RDONLY);
	m = read(n, str, letters);
	p = write(STDOUT_FILENO, str, m);

	if (n == -1 || m == -1 || p == -1 || p != m)
	{
		free(str);
		return (0);
	}

	free(str);
	close(n);

	return (p);
}
