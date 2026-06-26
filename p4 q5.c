#include <stdio.h>

int main() {
    int i, j, k;
    int n = 5;

    for (i = n; i >= 1; i--) {

        // Print leading spaces
        for (k = 1; k < i; k++) {
            printf("  ");
        }

        // Print ascending numbers
        for (j = i; j <= n; j++) {
            printf("%d ", j);
        }

        // Print descending numbers
        for (j = n - 1; j >= i; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}





