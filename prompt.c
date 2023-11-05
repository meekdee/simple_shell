#include "shell.h"

//puchar command.

int _putchar(char c)
{
	return (write(1, &c, 1));
}


//Prompt Function
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
