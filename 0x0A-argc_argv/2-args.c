#include <stdio.h>
#include "main.h"

/**
*main - print arguments it recieves
*@argc: argument count
*@argv: argument values
*
*Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
