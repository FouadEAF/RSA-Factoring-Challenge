#include "factor.h"

/**
 * main - main function.
 * @argc: argument c.
 * @argv: argument v.
 * Return: no return.
 */
int main(int argc, char *argv[])
{
	FILE *fptr;
	size_t counter;
	ssize_t ligne;
	char *buffer = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}

	fptr = fopen(argv[1], "r");
	if (fptr == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while((ligne = getline(&buffer, &counter, fptr)) != -1)
	{
		factorisation(buffer);
	}

	return (0);
}
