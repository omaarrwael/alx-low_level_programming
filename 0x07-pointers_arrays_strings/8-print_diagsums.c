#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;
i = 0;
while (i < size)
{
sum1 += a[i *size + i];
sum2 += a[i *size + (size - 1 - i)];
i++;
}
printf("%d, %d\n", sum1, sum2);
}
