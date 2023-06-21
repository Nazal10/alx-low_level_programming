#include <stdio.h>

/**
 * print_fibonacci - Prints the first n Fibonacci numbers
 * @n: The number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	int prev = 1;
	int current = 2;
	int i;

	printf("%d, %d", prev, current);

	for (i = 3; i <= n; i++)
	{
		int next = prev + current;
		printf(", %d", next);
		prev = current;
		current = next;
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	print_fibonacci(98);
	return (0);
}

