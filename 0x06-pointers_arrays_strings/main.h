#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
char *_strcat(char *dest, char *scr);
char *_strncat(char *dest, char *scr, int n);
char *_strncpy(char *dest, char *scr, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_toupper(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
