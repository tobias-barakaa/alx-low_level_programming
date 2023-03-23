#ifndef VARIADIC_FUNCTION.H
#define VARIADIC_FUNCTION.H
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct p - checker struct
 * @p: possibility
 * @f: Function to be used
 */
typedef struct p
{
  char *p;
  void (*f)(va_list);
} checker;

void print_c(va_list);
void print_i(va_list);
void print_f(va_list);
void print_s(va_list);


#endif
