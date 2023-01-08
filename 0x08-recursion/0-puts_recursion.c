#include "main.h"

/**
 * _puts_recursion - the function that calls itself.
 * _putchar-recursion - this is a function to print string recursively
 * @s: string parameter
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
