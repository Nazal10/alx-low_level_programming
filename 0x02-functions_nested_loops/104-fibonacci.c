#include <stdio.h>

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers.
 */
void print_fibonacci(void)
{

	unsigned long long int a = 1, b = 2;
	unsigned long long int count = 0;
	printf("%llu, %llu", a, b);

	while (count < 96)
	{
		unsigned long long int temp = a + b;
		a = b;
		b = temp;

		printf(", %llu", temp);

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

