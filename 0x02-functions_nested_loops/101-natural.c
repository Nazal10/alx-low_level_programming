#include <stdio.h>

/**
 * sum_multiples_3_or_5 - Calculates the sum of multiples of 3 or 5 below 1024.
 *
 * Return: The sum of the multiples.
 */
int sum_multiples_3_or_5(void)
{
        int total = 0;
        int num;

        for (num = 1; num < 1024; num++)
        {
                if (num % 3 == 0 || num % 5 == 0)
                {
                        total += num;
                }
        }

        return (total);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
        int result = sum_multiples_3_or_5();

        printf("%d\n", result);

        return (0);
}

