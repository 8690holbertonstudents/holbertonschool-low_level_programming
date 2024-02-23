#include <stdio.h>
#include <unistd.h>
/**
 * main - print size of diff. var.
 * Return: 1 must have an error
 */
int main(void)
{
	char t1[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	return (write(1, &t1, 59));
}
