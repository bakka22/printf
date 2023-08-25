#include "main.h"
#include <stddef.h>
/**
* _puts - print a string to stdout
*@str : pointer to string to be printed
*@buffer: local buffer of printf
*@j : index for buffer
*@count : count of charcters printed on printf
* Return: nothing
*/
void _puts(char *str, char *buffer, int *j, int *count)
{
	char *p;
	int i;
	char null[7] = "(null)";

	(void)j;
	(void)buffer;
	(void)count;
	if (str == NULL)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(null[i]);
			/*
			*buffer[*j] = null[i];
			*(*j)++;
			*(*count)++;
			*if (*j == 1023)
				*reset(buffer, j);
			*/
		}
		return;
	}
	p = str;
	while (1)
	{
		if (*p == '\0')
			break;

		_putchar(*p);
		p += 1;
		/*
		*buffer[*j] = *p;
		*p += 1;
		*(*j)++;
		*(*count)++;
		*if (*j == 1023)
			*reset(buffer, j);
		*/
	}
}
