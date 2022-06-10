#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 
 * replacing mutiples of 3 with fizz and 
 * mutiples of 5 with buzz and
 * mutiples of both with fizzbuzz
 *
 * Return: zero.
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
