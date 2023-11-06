#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


// Function declarations here
char **handletoken(char *buffer);


// Helping Functions here
int _putchar(char c);
void _prompt(void);

#endif
