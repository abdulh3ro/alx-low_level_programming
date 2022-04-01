#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
@@ -12,15 +13,13 @@ int main(int argc, char *argv[])

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		add += atoi(argv[i]);
	}
