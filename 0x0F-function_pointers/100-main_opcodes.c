#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of program.
 * @argc: the Argument count, program name inclusive.
 * @argv: the Array of argument strings.
 *
 * Return: 0 if successful.
 */

int main(int argc, char **argv)
{
	int j, n_bytes;
	char *main_cast;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_cast = (char *)main;
	for (j = 0; j < n_bytes; j++)
	{
		if (j == n_bytes - 1)
		{
			printf("%02hhx\n", main_cast[j]);
			break;
		}
		printf("%02hhx ", main_cast[j]);
	}

	return (0);
}
