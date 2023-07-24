#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int add_to_buffer(char c, char *buffer, int index);
int add_str_buffer(char* str, char *buffer, int index);
int printbuffer(char *buffer, int index);
int add_int_buffer(int d, char *buffer, int index);
int _printf(const char *format, ...);

#endif /* main.h */
