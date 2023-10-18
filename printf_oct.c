#include "main.h"

/**
 * printf_oct -this should print an octal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_oct(va_list val)
{
	int c;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (c = 0; c < counter; c++)
	{
		array[c] = temp % 8;
		temp /= 8;
	}
	for (c = counter - 1; c >= 0; c--)
	{
		_putchar(array[c] + '0');
	}
	free(array);
	return (counter);
}

