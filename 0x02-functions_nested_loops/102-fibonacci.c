#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
        unsigned long fib1 = 0, fib2 = 1, sum;
        int count;

        for (count = 0; count < 50; count++)
        {
                sum = fib1 + fib2;
                printf("%lu", sum);

                fib1 = fib2;
                fib2 = sum;

                if (count == 48) /* Check if it's the second-to-last number */
                {
                        printf(", ");
                }
                else if (count < 49) /* Check if it's not the last number */
                {
                        printf(", ");
                }
        }

        printf("\n");
        return (0);
}

