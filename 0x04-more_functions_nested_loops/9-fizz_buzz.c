#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * replacing multiples of 3 with fizz and
 * multiples of 5 with buzz and
 * multiples of both with fizzbuzz
 *
 * Return: zero.
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b)
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
