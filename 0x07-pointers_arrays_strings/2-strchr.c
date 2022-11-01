#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string.
 * @s: input
 * @c: input
 * Return: output
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (NULL);
		}
	}
	return (s);
}
