#include "main.h"

char **handletoken(char *buffer)
{
	char **args, *buff_cp, *delim = " \t\n", *tok;
	int count = 0, i = 0;

	buff_cp = strdup(buffer);
	if (buff_cp == NULL)
		return (NULL);

	tok = strtok(buff_cp, delim);
	while (tok != NULL)
	{
		count++;
		tok = strtok(NULL, delim);
	}
	count++;
	args = malloc(sizeof(char *) * count);
	if (args == NULL)
	{
		free(buff_cp);
		return (NULL);
	}
	tok = strtok(buffer, delim);
	while (tok != NULL)
	{
		args[i] = tok;
		i++;
		tok = strtok(NULL, delim);
	}
	args[i] = NULL;
	free(buff_cp);
	return (args);
}
