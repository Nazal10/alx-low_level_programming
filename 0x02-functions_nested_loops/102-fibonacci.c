#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long next;

	printf("%lu, %lu", fib1, fib2);

	for (i = 3; i <= 50; i++)
	{
		next = fib1 + fib2;
		printf(", %lu", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return (0);
}

