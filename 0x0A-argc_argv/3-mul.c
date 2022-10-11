#include <stdio.h>
#include "main.h"

/**
*main - multiplies two numbers
*@argc: number of arguments
*@argv: arguments
*Return: 1 if less than 2 arguments given
*	 0 (success)
*/

int main(int argc, char *argv[])
{
	int multi_num = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		multi_num = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi_num);
	}
	return (0);
}
