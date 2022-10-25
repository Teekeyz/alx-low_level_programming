#include <stdio.h>

/**
 * main - program that prints (1-100), followed by a new line.
 * for multiples of three print Fizz, and  multiples of five print Buzz.
 * numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: 0 always.
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
