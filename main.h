
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

/*
#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void display_terminal(void);
void read_cmd(char *command,size_t size)
void _print(const char *txt)
void exec_cmd(const char *command)
*/
#endif
