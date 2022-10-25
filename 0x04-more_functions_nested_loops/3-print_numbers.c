#include <stdio.h>
#include "main.h"

/**
 * print_numbers -function that prints (0-9), followed by a new line.
 * @ the numbers to print 0 to 9
 *
 * Return:is  0.
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
