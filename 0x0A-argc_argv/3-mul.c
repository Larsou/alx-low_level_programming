#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies the second number
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc >= 3)
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
