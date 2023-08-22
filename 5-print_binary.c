#include "main.h"
/**
*print_binary - convert an int to base 2
*@n : the number to be converted
*@buffer : local buffer on printf
*@j : index to buffer
*@count : number of charcters printed
*/
void print_binary(unsigned int n, char *buffer, int *j, int *count)
{
	int i, x;
	char arr[33];

	x = 0;
	for (i = 31; i >= 0; i--)
	{
		arr[x] = (48 + ((n >> i) & 1));
		x++;
	}
	arr[32] = '\0';
	x = 0;
	for (i = 0; i < 32; i++)
	{
		if (arr[i] == '1')
		{
			for (x = 0; arr[x + i] != '\0'; x++)
			{
				buffer[*j] = arr[i + x];
				(*j)++;
				(*count)++;
				if (*j == 1022)
					reset(buffer, j);
			}
			return;
		}
		else
			continue;
	}
	buffer[*j] = '0';
	(*j)++;
	(*count)++;
	if (*j == 1022)
		reset(buffer, j);
}
