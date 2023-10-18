#include "main.h"
/**
 * printf_exclusive_string - this prints an exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list val)
{
	char *x;
	int i, len = 0;
	int cast;

	x = va_arg(val, char *);
	if (x == NULL)
		x = "(null)";
	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] < 32 || x[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = x[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_aux(cast);
		}
		else
		{
			_putchar(x[i]);
			len++;
		}
	}
	return (len);
}

