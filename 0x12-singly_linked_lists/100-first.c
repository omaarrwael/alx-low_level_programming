#include <stdio.h>
void print_before_main(void) __attribute__((constructor));
/**
 * print_before_main - Function to be executed before main
 */
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
int main(void)
{
printf("Main function executed.\n");
return (0);
}
