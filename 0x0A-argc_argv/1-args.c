#include <stdio.h>
#include "main.h"

/**
* main - prints the number of arguments passed
*@argc: argument count
*@argv: argument vector
*
*Return: always 0 (success)
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
