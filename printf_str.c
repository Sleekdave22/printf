#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int v;

	for (v = 0; s[v] != 0; v++)
		;
	return (v);

}
/**
 * _strlenc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: v
 */
int _strlenc(const char *s)
{
	int v;

	for (v = 0; s[v] != 0; v++)
		;
	return (v);
}

