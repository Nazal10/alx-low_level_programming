#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    unsigned int first = 1, second = 2, next;
    unsigned int count;

    printf("%u, %u", first, second);

    for (count = 3; count <= 98; count++)
    {
        next = first + second;
        printf(", %u", next);

        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

