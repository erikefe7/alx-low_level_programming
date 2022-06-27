#include <stdio.h>

/**
 * main - prints its name, followed by new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program arguments
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
