#include "main.h"
#include <stdio.h>
/**
 * _putchar - writes a character c to stdout.
 * @c: the character to print .
 * Return: On success 1.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
