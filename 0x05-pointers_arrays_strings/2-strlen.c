#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: The string we are getting it's length.
 *
 * Return: Length of@str.
 */
int _strlen(char *s)
{
	int  length = 0;

	while (*s++)
		length++;

	return (length);
}
