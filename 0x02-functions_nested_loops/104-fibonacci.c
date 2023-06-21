#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;
        long int fib1 = 1, fib2 = 2, fib_sum;

        printf("%ld, %ld", fib1, fib2);

        for (i = 2; i < 98; i++)
        {
                fib_sum = fib1 + fib2;
                printf(", %ld", fib_sum);
                fib1 = fib2;
                fib2 = fib_sum;
        }

        printf("\n");
        return (0);
}

