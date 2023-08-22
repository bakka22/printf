#include "main.h"

/**
* print_u - print unsigned int
*@n: the number to be printed
*@buffer : local buffer on printf
*@j : index for buffer
*@count : the number of charcters printed
* Return: nothing
*/
void print_u(unsigned int n, char *buffer, int *j, int *count)
{
	unsigned int n1;

	n1 = n;

	if (n1 / 10)
	{
		print_u(n1 / 10, buffer, j, count);
	}

	buffer[*j] = (n1 % 10 + '0');
	(*j)++;
	(*count)++;
	if (*j == 1022)
		reset(buffer, j);
}
