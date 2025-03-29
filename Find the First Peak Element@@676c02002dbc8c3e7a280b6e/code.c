#include<stdio.h>

int peak(int n, int arr[], int a, int b, int c) {
    // Check the first three elements for a peak
    a = arr[0];
    b = arr[1];
    c = arr[2];
    
    if (a < b && b > c) {
        return 1; // Peak found at index 1 (b)
    } else {
        // Start checking from the 3rd element onwards
        for (int i = 3; i < n; i++) {
            a = arr[i - 2];
            b = arr[i - 1];
            c = arr[i];

            // If arr[i-1] is a peak
            if (a < b && b > c) {
                return 1; // Peak found at index i-1 (b)
            }
        }
    }

    return 0; // No peak found
}

int main() {
    int n, arr[100];

    // Input the number of elements
    scanf("%d", &n);

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a = arr[0], b = arr[1], c = arr[2];
    
    // Check if there's a peak
    if (peak(n, arr, a, b, c)) {
        printf("%d\n", b); // Print the peak element
    } else {
        printf("-1");
    }

    return 0;
}
