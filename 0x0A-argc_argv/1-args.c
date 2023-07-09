#include <stdio.h>
/**
 * main -it prints the number of arguments that are passed to it
 * @argc:the input
 * @argv:the input
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
