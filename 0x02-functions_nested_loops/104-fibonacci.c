#include <stdio.h>

void print_fibonacci(int n) {
    int prev = 1;
    int current = 2;
    int i;

    printf("%d, %d", prev, current);

    for (i = 3; i <= n; i++) {
        int next = prev + current;
        printf(", %d", next);
        prev = current;
        current = next;
    }

    printf("\n");
}

int main() {
    print_fibonacci(98);
    return 0;
}

