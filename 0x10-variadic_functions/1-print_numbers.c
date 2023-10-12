#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;
va_start(args, n);
while (i < n)
{
printf("%d", va_arg(args, int));
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(args);
}