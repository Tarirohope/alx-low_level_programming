#include "main.h"

/**
 * _putchar-recursion - this is a function that prints the string recursively.
 * _puts_recursion -  prints a string recursively
 * @s: string parameter.
 * Return: no return.
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\0');
}
