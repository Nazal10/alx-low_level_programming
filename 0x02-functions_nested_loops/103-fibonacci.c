#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds the sum of even-valued terms in the Fibonacci sequence
 *              that do not exceed 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long fib1 = 1;
	unsigned long fib2 = 2;
	unsigned long next;
	unsigned long sum = 2; /* Start with the initial even value */

	while (fib2 <= 4000000)
	{
		next = fib1 + fib2;
		if (next % 2 == 0)
			sum += next;

		fib1 = fib2;
		fib2 = next;
	}

	printf("%lu\n", sum);

	return (0);
}

