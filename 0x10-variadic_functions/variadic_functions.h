#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void fun_char(char * separator, va_list args);
void fun_int(char * separator, va_list args);
void fun_float(char * separator, va_list args);
void fun_string(char * separator, va_list args);
typedef struct format_type
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} f_dt;

#endif /* VARIADIC_FUNCTIONS_H */
