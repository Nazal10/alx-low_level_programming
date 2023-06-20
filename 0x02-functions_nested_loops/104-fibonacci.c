#include <stdio.h>

void print_fibonacci(int n) {
    int first = 1, second = 2, next, count;
    printf("%d, %d, ", first, second);

    for (count = 3; count <= n; count++) {
        next = first + second;
        printf("%d", next);
        if (count < n) {
            printf(", ");
        }
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    print_fibonacci(98);
    return 0;
}

