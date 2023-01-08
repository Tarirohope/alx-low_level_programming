#include "main."
/**
 * _print_rev_recursion - print string in reverse using recursion
 * @s: string s
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_print_rev_recursion(s + 1);
	}
	else
		_putchar('\0');
}
