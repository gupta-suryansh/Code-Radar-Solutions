#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the number of rows

    // Loop through each row
    for (int i = 0; i < n; i++) {
        // Start the row with 1 for odd rows, 0 for even rows
        int start = i % 2;  // Row starts with 1 for odd rows, 0 for even rows

        // Loop through each column in the row
        for (int j = 0; j <= i; j++) {
            // Print alternating 1s and 0s, starting with `start`
            printf("%d ", (start + j) % 2);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
