#include <stdio.h>

void print_fibonacci() {
    unsigned int a = 1, b = 2;
    unsigned int count = 0;

    printf("%u, %u, ", a, b);

    while (count < 96) {
        unsigned int temp = a + b;
        a = b;
        b = temp;

        printf("%u", temp);

        count++;
        if (count != 96) {
            printf(", ");
        }
    }

    printf("\n");
}

int main() {
    print_fibonacci();
    return 0;
}

