#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function that prints (0-9), followed by a new line.
 * @print all except 2 and 4.
 * Return: numbers.
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
