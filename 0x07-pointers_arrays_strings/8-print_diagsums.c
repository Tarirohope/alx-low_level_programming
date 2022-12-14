#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the number of two
 * diagsonals of a square matrix of integers
 * @a: input pointers.
 * @size: size of the matrix.
 * Return: no return.
 */
void print_diagsum(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(a + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
