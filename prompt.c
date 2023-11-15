#include "main.h"


/**
 * _putchar - displays a string
 * @c: string
 *
 * Returns: the string.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _prompt - displays the strings
 */

void _prompt(void)
{
	char *pro = "$ ";
	int index = 0;

	while (pro[index] != '\0')
	{
		_putchar(pro[index]);
		index++;
	}
}
