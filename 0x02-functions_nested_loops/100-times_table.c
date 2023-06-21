#include <stdio.h>

void print_times_table(int n) {
    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int result = i * j;
            printf("%3d", result); /* Adjust the width to 3 characters */
        }
        printf("\n");
    }
}

