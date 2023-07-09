#include <stdio.h>
/**
 * main -it prints all argument it receives
 * @argc:the input
 * @argv:the input
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
