#include "main.h"

char * getevr(char *var, char **env)
{
	int id = 0, n;
	n = strlen(var);

	while (env[id] != NULL)
	{
		if (strncmp(env[id], var, n) == 0)
			return (env[id] + (n +1));
		id++;
	}
	return (NULL);
}
