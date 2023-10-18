#include "main.h"

/**
 * printf_hex_aux - this prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int printf_hex_aux(unsigned long int num)
{
	long int s;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (s = 0; s < counter; s++)
	{
		array[s] = temp % 16;
		temp /= 16;
	}
	for (s = counter - 1; s >= 0; s--)
	{
		if (array[s] > 9)
			array[s] = array[s] + 39;
		_putchar(array[s] + '0');
	}
	free(array);
	return (counter);
}
