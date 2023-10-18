#include "main.h"

/**
 * printf_pointer - this should print an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_pointer(va_list val)
{
	void *x;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	x = va_arg(val, void*);
	if (x == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)x;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}
