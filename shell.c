#include "main.h"

/**
 * Few comments.
 *
*/
int main(int argc, char **argv, char **env)
{
	char *buffer = NULL, **args, *paths;
	size_t n = 0;
	ssize_t read_n;

	while (1)
	{
		_prompt();
		read_n = getline(&buffer, &n, stdin);
		if (read_n == -1)
			exit(EXIT_FAILURE);
		args = handletoken(buffer);
		paths = getevr("PATH", env);
	}
	return (0);
}
