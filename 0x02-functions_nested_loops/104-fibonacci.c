#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers.
 */
void print_fibonacci(void)
{
	unsigned long a = 1, b = 2;
	unsigned long count = 0;

	printf("%lu, %lu", a, b);

	while (count < 100)
	{
		unsigned long temp = a + b;
		a = b;
		b = temp;

		printf(", %lu", temp);

		count++;
	}

	putchar('\n');
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_fibonacci();
	return (0);
}

