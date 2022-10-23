#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct spc_obj - a struct that prints the characters in the object's funct
*
* @elem: the obj
*
* @f: pointer to the functions
*/

struct spc_obj
{
	char *elem;

	int (*f)(va_list);
};

typedef struct spc_obj pr_elem;

int decipher(const char *format, pr_elem f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int pr_chr(va_list);
int pr_str(va_list);
int pr_per(va_list);
int pr_int(va_list);
int pr_bi(va_list);
int pr_rev(va_list arg);
int pr_oct(va_list list);
int pr_hex(va_list list);
int unsigned_integer(va_list);
int print_number(va_list);
int rot13(va_list);
int print_heX(va_list list);


unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);

#endif
