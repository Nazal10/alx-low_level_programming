#include <stdio.h>

void print_times_table(int n);

int main() {
    int n = 2;
    printf("Case: print_times_table(%d);\n", n);
    print_times_table(n);

    n = 10;
    printf("\nCase: print_times_table(%d);\n", n);
    print_times_table(n);

    n = 13;
    printf("\nCase: print_times_table(%d);\n", n);
    print_times_table(n);

    n = 0;
    printf("\nCase: print_times_table(%d);\n", n);
    print_times_table(n);

    return 0;
}

