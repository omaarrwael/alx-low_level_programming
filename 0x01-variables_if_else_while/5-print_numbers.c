#include <stdio.h>
/**
 * main - entry point
 * description: prints all single digit numbers but 2
 * Return:always 0 (successfull)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}