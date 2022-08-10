#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int num_convert(va_list, char, int);
int char_convert(va_list, char, int);
int print_num(va_list, int *, char);
int print_char(va_list, int *);
int print_string(va_list, int *, char);
char *int_passer(unsigned int, unsigned int *);
int count_digits(unsigned int, unsigned int *);
int out_num(char *, int, int *);
void rev_string(char *, int);

#endif
