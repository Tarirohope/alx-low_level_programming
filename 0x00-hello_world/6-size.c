#include <stdio.h>
/**
 * main - Print out sizes of data types in c.
 * code by tarirohope
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu bytes(S)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
	printf("Size of a long long: %lu bytes(S)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
}