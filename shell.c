#include "shell.h"

/**
 * Few comments.
 *
*/
int main(void)
{
	char *buffer = NULL;
	size_t n = 0;
	ssize_t read_n;

	while (1)
	{
		_prompt();
		read_n = getline(&buffer, &n, stdin);
		if (read_n == -1)
			exit(EXIT_FAILURE);
	}
	return (0);
}
