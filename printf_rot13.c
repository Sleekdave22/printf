#include "main.h"
/**
 * printf_rot13 - printf string to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int printf_rot13(va_list args)
{
	int a, b, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a]; a++)
	{
		k = 0;
		for (b = 0; alpha[b] && !k; b++)
		{
			if (s[a] == alpha[b])
			{
				_putchar(beta[b]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[a]);
			counter++;
		}
	}
	return (counter);
}

