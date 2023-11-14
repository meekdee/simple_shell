#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


/* Function declarations here */
char **handletoken(char *buffer);
char *getevr(char *var, char **env);


/* Helping Functions here*/
int _putchar(char c);
void _prompt(void);

#endif
