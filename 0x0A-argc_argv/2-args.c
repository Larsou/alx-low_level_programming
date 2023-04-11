#include <stdio.h>
/**
 *main - print all arguments
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
