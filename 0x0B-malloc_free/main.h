#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *s);
int _get_str_len(char *s);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av)

#endif
