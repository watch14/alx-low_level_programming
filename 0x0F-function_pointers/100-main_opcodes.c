#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int m;

	if (argc !=  2)
	{
		printf("Error\n");
		exit(1);
	}
	m = atoi(argv[1]);
	if (m < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (m--)
		printf("%02hhx%s", *p++, m ? " " : "\n");
	return (0);
}
