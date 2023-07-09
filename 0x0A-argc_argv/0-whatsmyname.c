#include <stdio.h>
/**
 * main -this is the  function that prints the name of the file
 * @argc: it is an argument counter for char
 * @argv: it is an argument value for char
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
